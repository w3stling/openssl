/* crypto/engine/engine_err.c */
/* ====================================================================
 * Copyright (c) 1999 The OpenSSL Project.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer. 
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. All advertising materials mentioning features or use of this
 *    software must display the following acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit. (http://www.OpenSSL.org/)"
 *
 * 4. The names "OpenSSL Toolkit" and "OpenSSL Project" must not be used to
 *    endorse or promote products derived from this software without
 *    prior written permission. For written permission, please contact
 *    openssl-core@OpenSSL.org.
 *
 * 5. Products derived from this software may not be called "OpenSSL"
 *    nor may "OpenSSL" appear in their names without prior written
 *    permission of the OpenSSL Project.
 *
 * 6. Redistributions of any form whatsoever must retain the following
 *    acknowledgment:
 *    "This product includes software developed by the OpenSSL Project
 *    for use in the OpenSSL Toolkit (http://www.OpenSSL.org/)"
 *
 * THIS SOFTWARE IS PROVIDED BY THE OpenSSL PROJECT ``AS IS'' AND ANY
 * EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE OpenSSL PROJECT OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED
 * OF THE POSSIBILITY OF SUCH DAMAGE.
 * ====================================================================
 *
 * This product includes cryptographic software written by Eric Young
 * (eay@cryptsoft.com).  This product includes software written by Tim
 * Hudson (tjh@cryptsoft.com).
 *
 */

/* NOTE: this file was auto generated by the mkerr.pl script: any changes
 * made to it will be overwritten when the script next updates this file,
 * only reason strings will be preserved.
 */

#include <stdio.h>
#include <openssl/err.h>
#include <openssl/engine.h>

/* BEGIN ERROR CODES */
#ifndef OPENSSL_NO_ERR
static ERR_STRING_DATA ENGINE_str_functs[]=
	{
{ERR_PACK(0,ENGINE_F_ATALLA_CTRL,0),	"ATALLA_CTRL"},
{ERR_PACK(0,ENGINE_F_ATALLA_FINISH,0),	"ATALLA_FINISH"},
{ERR_PACK(0,ENGINE_F_ATALLA_INIT,0),	"ATALLA_INIT"},
{ERR_PACK(0,ENGINE_F_ATALLA_MOD_EXP,0),	"ATALLA_MOD_EXP"},
{ERR_PACK(0,ENGINE_F_ATALLA_RSA_MOD_EXP,0),	"ATALLA_RSA_MOD_EXP"},
{ERR_PACK(0,ENGINE_F_CSWIFT_CTRL,0),	"CSWIFT_CTRL"},
{ERR_PACK(0,ENGINE_F_CSWIFT_DSA_SIGN,0),	"CSWIFT_DSA_SIGN"},
{ERR_PACK(0,ENGINE_F_CSWIFT_DSA_VERIFY,0),	"CSWIFT_DSA_VERIFY"},
{ERR_PACK(0,ENGINE_F_CSWIFT_FINISH,0),	"CSWIFT_FINISH"},
{ERR_PACK(0,ENGINE_F_CSWIFT_INIT,0),	"CSWIFT_INIT"},
{ERR_PACK(0,ENGINE_F_CSWIFT_MOD_EXP,0),	"CSWIFT_MOD_EXP"},
{ERR_PACK(0,ENGINE_F_CSWIFT_MOD_EXP_CRT,0),	"CSWIFT_MOD_EXP_CRT"},
{ERR_PACK(0,ENGINE_F_CSWIFT_RSA_MOD_EXP,0),	"CSWIFT_RSA_MOD_EXP"},
{ERR_PACK(0,ENGINE_F_DYNAMIC_CTRL,0),	"DYNAMIC_CTRL"},
{ERR_PACK(0,ENGINE_F_DYNAMIC_GET_DATA_CTX,0),	"DYNAMIC_GET_DATA_CTX"},
{ERR_PACK(0,ENGINE_F_DYNAMIC_LOAD,0),	"DYNAMIC_LOAD"},
{ERR_PACK(0,ENGINE_F_ENGINE_ADD,0),	"ENGINE_add"},
{ERR_PACK(0,ENGINE_F_ENGINE_BY_ID,0),	"ENGINE_by_id"},
{ERR_PACK(0,ENGINE_F_ENGINE_CMD_IS_EXECUTABLE,0),	"ENGINE_cmd_is_executable"},
{ERR_PACK(0,ENGINE_F_ENGINE_CTRL,0),	"ENGINE_ctrl"},
{ERR_PACK(0,ENGINE_F_ENGINE_CTRL_CMD,0),	"ENGINE_ctrl_cmd"},
{ERR_PACK(0,ENGINE_F_ENGINE_CTRL_CMD_STRING,0),	"ENGINE_ctrl_cmd_string"},
{ERR_PACK(0,ENGINE_F_ENGINE_FINISH,0),	"ENGINE_finish"},
{ERR_PACK(0,ENGINE_F_ENGINE_FREE,0),	"ENGINE_free"},
{ERR_PACK(0,ENGINE_F_ENGINE_GET_DEFAULT_TYPE,0),	"ENGINE_GET_DEFAULT_TYPE"},
{ERR_PACK(0,ENGINE_F_ENGINE_GET_NEXT,0),	"ENGINE_get_next"},
{ERR_PACK(0,ENGINE_F_ENGINE_GET_PREV,0),	"ENGINE_get_prev"},
{ERR_PACK(0,ENGINE_F_ENGINE_INIT,0),	"ENGINE_init"},
{ERR_PACK(0,ENGINE_F_ENGINE_LIST_ADD,0),	"ENGINE_LIST_ADD"},
{ERR_PACK(0,ENGINE_F_ENGINE_LIST_REMOVE,0),	"ENGINE_LIST_REMOVE"},
{ERR_PACK(0,ENGINE_F_ENGINE_LOAD_PRIVATE_KEY,0),	"ENGINE_load_private_key"},
{ERR_PACK(0,ENGINE_F_ENGINE_LOAD_PUBLIC_KEY,0),	"ENGINE_load_public_key"},
{ERR_PACK(0,ENGINE_F_ENGINE_NEW,0),	"ENGINE_new"},
{ERR_PACK(0,ENGINE_F_ENGINE_REMOVE,0),	"ENGINE_remove"},
{ERR_PACK(0,ENGINE_F_ENGINE_SET_DEFAULT_TYPE,0),	"ENGINE_SET_DEFAULT_TYPE"},
{ERR_PACK(0,ENGINE_F_ENGINE_SET_ID,0),	"ENGINE_set_id"},
{ERR_PACK(0,ENGINE_F_ENGINE_SET_NAME,0),	"ENGINE_set_name"},
{ERR_PACK(0,ENGINE_F_ENGINE_UNLOAD_KEY,0),	"ENGINE_UNLOAD_KEY"},
{ERR_PACK(0,ENGINE_F_HWCRHK_CTRL,0),	"HWCRHK_CTRL"},
{ERR_PACK(0,ENGINE_F_HWCRHK_FINISH,0),	"HWCRHK_FINISH"},
{ERR_PACK(0,ENGINE_F_HWCRHK_GET_PASS,0),	"HWCRHK_GET_PASS"},
{ERR_PACK(0,ENGINE_F_HWCRHK_INIT,0),	"HWCRHK_INIT"},
{ERR_PACK(0,ENGINE_F_HWCRHK_INSERT_CARD,0),	"HWCRHK_INSERT_CARD"},
{ERR_PACK(0,ENGINE_F_HWCRHK_LOAD_PRIVKEY,0),	"HWCRHK_LOAD_PRIVKEY"},
{ERR_PACK(0,ENGINE_F_HWCRHK_LOAD_PUBKEY,0),	"HWCRHK_LOAD_PUBKEY"},
{ERR_PACK(0,ENGINE_F_HWCRHK_MOD_EXP,0),	"HWCRHK_MOD_EXP"},
{ERR_PACK(0,ENGINE_F_HWCRHK_MOD_EXP_CRT,0),	"HWCRHK_MOD_EXP_CRT"},
{ERR_PACK(0,ENGINE_F_HWCRHK_RAND_BYTES,0),	"HWCRHK_RAND_BYTES"},
{ERR_PACK(0,ENGINE_F_HWCRHK_RSA_MOD_EXP,0),	"HWCRHK_RSA_MOD_EXP"},
{ERR_PACK(0,ENGINE_F_INT_CTRL_HELPER,0),	"INT_CTRL_HELPER"},
{ERR_PACK(0,ENGINE_F_LOG_MESSAGE,0),	"LOG_MESSAGE"},
{ERR_PACK(0,ENGINE_F_NURON_CTRL,0),	"NURON_CTRL"},
{ERR_PACK(0,ENGINE_F_NURON_FINISH,0),	"NURON_FINISH"},
{ERR_PACK(0,ENGINE_F_NURON_INIT,0),	"NURON_INIT"},
{ERR_PACK(0,ENGINE_F_NURON_MOD_EXP,0),	"NURON_MOD_EXP"},
{ERR_PACK(0,ENGINE_F_SET_DATA_CTX,0),	"SET_DATA_CTX"},
{ERR_PACK(0,ENGINE_F_UBSEC_CTRL,0),	"UBSEC_CTRL"},
{ERR_PACK(0,ENGINE_F_UBSEC_DSA_SIGN,0),	"UBSEC_DSA_SIGN"},
{ERR_PACK(0,ENGINE_F_UBSEC_DSA_VERIFY,0),	"UBSEC_DSA_VERIFY"},
{ERR_PACK(0,ENGINE_F_UBSEC_FINISH,0),	"UBSEC_FINISH"},
{ERR_PACK(0,ENGINE_F_UBSEC_INIT,0),	"UBSEC_INIT"},
{ERR_PACK(0,ENGINE_F_UBSEC_MOD_EXP,0),	"UBSEC_MOD_EXP"},
{ERR_PACK(0,ENGINE_F_UBSEC_RSA_MOD_EXP,0),	"UBSEC_RSA_MOD_EXP"},
{ERR_PACK(0,ENGINE_F_UBSEC_RSA_MOD_EXP_CRT,0),	"UBSEC_RSA_MOD_EXP_CRT"},
{0,NULL}
	};

static ERR_STRING_DATA ENGINE_str_reasons[]=
	{
{ENGINE_R_ALREADY_LOADED                 ,"already loaded"},
{ENGINE_R_ARGUMENT_IS_NOT_A_NUMBER       ,"argument is not a number"},
{ENGINE_R_BIO_WAS_FREED                  ,"bio was freed"},
{ENGINE_R_BN_CTX_FULL                    ,"BN_CTX full"},
{ENGINE_R_BN_EXPAND_FAIL                 ,"bn_expand fail"},
{ENGINE_R_CHIL_ERROR                     ,"chil error"},
{ENGINE_R_CMD_NOT_EXECUTABLE             ,"cmd not executable"},
{ENGINE_R_COMMAND_TAKES_INPUT            ,"command takes input"},
{ENGINE_R_COMMAND_TAKES_NO_INPUT         ,"command takes no input"},
{ENGINE_R_CONFLICTING_ENGINE_ID          ,"conflicting engine id"},
{ENGINE_R_CTRL_COMMAND_NOT_IMPLEMENTED   ,"ctrl command not implemented"},
{ENGINE_R_DH_NOT_IMPLEMENTED             ,"dh not implemented"},
{ENGINE_R_DSA_NOT_IMPLEMENTED            ,"dsa not implemented"},
{ENGINE_R_DSO_FAILURE                    ,"DSO failure"},
{ENGINE_R_DSO_FUNCTION_NOT_FOUND         ,"dso function not found"},
{ENGINE_R_DSO_NOT_FOUND                  ,"dso not found"},
{ENGINE_R_ENGINE_IS_NOT_IN_LIST          ,"engine is not in the list"},
{ENGINE_R_FAILED_LOADING_PRIVATE_KEY     ,"failed loading private key"},
{ENGINE_R_FAILED_LOADING_PUBLIC_KEY      ,"failed loading public key"},
{ENGINE_R_FINISH_FAILED                  ,"finish failed"},
{ENGINE_R_GET_HANDLE_FAILED              ,"could not obtain hardware handle"},
{ENGINE_R_ID_OR_NAME_MISSING             ,"'id' or 'name' missing"},
{ENGINE_R_INIT_FAILED                    ,"init failed"},
{ENGINE_R_INTERNAL_LIST_ERROR            ,"internal list error"},
{ENGINE_R_INVALID_ARGUMENT               ,"invalid argument"},
{ENGINE_R_INVALID_CMD_NAME               ,"invalid cmd name"},
{ENGINE_R_INVALID_CMD_NUMBER             ,"invalid cmd number"},
{ENGINE_R_MISSING_KEY_COMPONENTS         ,"missing key components"},
{ENGINE_R_NOT_INITIALISED                ,"not initialised"},
{ENGINE_R_NOT_LOADED                     ,"not loaded"},
{ENGINE_R_NO_CALLBACK                    ,"no callback"},
{ENGINE_R_NO_CONTROL_FUNCTION            ,"no control function"},
{ENGINE_R_NO_INDEX                       ,"no index"},
{ENGINE_R_NO_KEY                         ,"no key"},
{ENGINE_R_NO_LOAD_FUNCTION               ,"no load function"},
{ENGINE_R_NO_REFERENCE                   ,"no reference"},
{ENGINE_R_NO_SUCH_ENGINE                 ,"no such engine"},
{ENGINE_R_NO_UNLOAD_FUNCTION             ,"no unload function"},
{ENGINE_R_PRIVATE_KEY_ALGORITHMS_DISABLED,"private key algorithms disabled"},
{ENGINE_R_PROVIDE_PARAMETERS             ,"provide parameters"},
{ENGINE_R_REQUEST_FAILED                 ,"request failed"},
{ENGINE_R_REQUEST_FALLBACK               ,"request fallback"},
{ENGINE_R_RSA_NOT_IMPLEMENTED            ,"rsa not implemented"},
{ENGINE_R_SIZE_TOO_LARGE_OR_TOO_SMALL    ,"size too large or too small"},
{ENGINE_R_UNIT_FAILURE                   ,"unit failure"},
{ENGINE_R_VERSION_INCOMPATIBILITY        ,"version incompatibility"},
{0,NULL}
	};

#endif

void ERR_load_ENGINE_strings(void)
	{
	static int init=1;

	if (init)
		{
		init=0;
#ifndef OPENSSL_NO_ERR
		ERR_load_strings(ERR_LIB_ENGINE,ENGINE_str_functs);
		ERR_load_strings(ERR_LIB_ENGINE,ENGINE_str_reasons);
#endif

		}
	}
