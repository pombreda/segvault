/*---------------------------------------------------------------------------*
 *--- (c) Martin Vuagnoux, Cambridge University, UK.                      ---*
 *---                                                            Sep.2004 ---*
 *---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*
 * NAME       : network.h
 * DESCRIPTION: Define network functions
 *---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------*
 * DESC: parse the tcp connection with the fuzzer
 * RETN: void (fatal if error)
 *---------------------------------------------------------------------------*/
void inet_connection(config *conf);

/*---------------------------------------------------------------------------*
 * DESC: send asynchrone msg (SIGSEGV, EXIT, WEIGHT)
 * RETN: void (fatal error)
 *---------------------------------------------------------------------------*/
void inet_send_msg(config *conf, unsigned int type, unsigned id);
