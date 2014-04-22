/*================================================================================*
** File:  ut_osfile_test_platforms.h
** Owner: Tam Ngo
** Date:  September 2013
**================================================================================*/

#ifndef _UT_OSFILE_TEST_PLATFORMS_H_
#define _UT_OSFILE_TEST_PLATFORMS_H_

/*--------------------------------------------------------------------------------*
** Includes
**--------------------------------------------------------------------------------*/

#ifdef _LINUX_OS_
#endif  /* _LINUX_OS_ */

#ifdef OSP_ARINC653
#include "apex_api.h"
#endif  /* OSP_ARINC653 */

/*--------------------------------------------------------------------------------*
** Macros
**--------------------------------------------------------------------------------*/

/*--------------------------------------------*/
#ifdef _LINUX_OS_
/*--------------------------------------------*/

#define UT_OS_GET_HOME_ENV_FOR_NOMINAL_SHELLOUTPUTTOFILE_MACRO \
    envName = getenv("HOME");

/*--------------------------------------------------------------------------------*/

#define UT_OS_COMPARE_COND_FOR_NOMINAL_GETFDINFO_MACRO              \
if ((OS_FDGetInfo(g_fDescs[0], &fdProps) != OS_FS_SUCCESS) ||       \
    (fdProps.IsValid != TRUE) ||                                    \
    (strncmp(fdProps.Path, g_fNames[0], strlen(g_fNames[0])) != 0))

/*--------------------------------------------*/
#endif  /* _LINUX_OS_ */
/*--------------------------------------------*/

/*--------------------------------------------*/
#ifdef OSP_ARINC653
/*--------------------------------------------*/

#define UT_OS_GET_HOME_ENV_FOR_NOMINAL_SHELLOUTPUTTOFILE_MACRO

/*--------------------------------------------------------------------------------*/

#define UT_OS_COMPARE_COND_FOR_NOMINAL_GETFDINFO_MACRO         \
if ((OS_FDGetInfo(g_fDescs[0], &fdProps) != OS_FS_SUCCESS) ||  \
    (fdProps.IsValid != TRUE) ||                               \
    (strncmp(fdProps.Path, fileName, strlen(fileName)) != 0))

/*--------------------------------------------*/
#endif  /* OSP_ARINC653 */
/*--------------------------------------------*/

/*--------------------------------------------------------------------------------*
** Data types
**--------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------*
** External global variables
**--------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------*
** Global variables
**--------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------*
** Function prototypes
**--------------------------------------------------------------------------------*/

/*--------------------------------------------------------------------------------*/

#endif  /* _UT_OSFILE_TEST_PLATFORMS_H_ */

/*================================================================================*
** End of File: ut_osfile_test_platforms.h
**================================================================================*/