#include <assert.h>
#include <math.h>
#include "../code/qcommon/q_shared.h"

// Custom assert for floating point comparisons
void assert_float_equal(float a, float b) {
	assert(fabs(a - b) < 1e-6);
}

int main(void) {
	// AngleNormalize360 tests
	assert(AngleNormalize360(0) == 0);
	assert(AngleNormalize360(360) == 0);
	assert(AngleNormalize360(720) == 0);
	assert(AngleNormalize360(-360) == 0);
	assert(AngleNormalize360(180) == 180);
	assert(AngleNormalize360(-180) == 180);
	assert(AngleNormalize360(450) == 90);

	// AngleNormalize180 tests
	assert(AngleNormalize180(0) == 0);
	assert(AngleNormalize180(360) == 0);
	assert(AngleNormalize180(180) == 180);
	assert(AngleNormalize180(-180) == 180);
	assert(AngleNormalize180(270) == -90);
	assert(AngleNormalize180(-270) == 90);

	// LerpAngle tests
	assert_float_equal(LerpAngle(0, 90, 0.5), 45);
	assert_float_equal(LerpAngle(0, 180, 0.5), 90);
	assert_float_equal(LerpAngle(0, 360, 0.5), 0);
	assert_float_equal(LerpAngle(350, 10, 0.5), 360);
	assert_float_equal(LerpAngle(10, 350, 0.5), 0);

	// VectorNormalize tests
	vec3_t v = {3, 4, 0};
	float len = VectorNormalize(v);
	assert_float_equal(len, 5.0);
	assert_float_equal(v[0], 0.6);
	assert_float_equal(v[1], 0.8);
	assert_float_equal(v[2], 0.0);

	vec3_t v2 = {0, 0, 0};
	len = VectorNormalize(v2);
	assert_float_equal(len, 0.0);
	assert_float_equal(v2[0], 0.0);
	assert_float_equal(v2[1], 0.0);
	assert_float_equal(v2[2], 0.0);

	return 0;
}
