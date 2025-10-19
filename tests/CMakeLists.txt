add_executable(simple_test simple_test.c)
add_test(NAME simple_test COMMAND simple_test)

add_executable(test_q_stricmp test_q_stricmp.c ../code/qcommon/q_shared.c ../code/qcommon/common.c null_sys_error.c null_implementations.c)
add_test(NAME test_q_stricmp COMMAND test_q_stricmp)

add_executable(test_com_defaultextension test_com_defaultextension.c ../code/qcommon/q_shared.c ../code/qcommon/common.c null_sys_error.c null_implementations.c)
add_test(NAME test_com_defaultextension COMMAND test_com_defaultextension)
