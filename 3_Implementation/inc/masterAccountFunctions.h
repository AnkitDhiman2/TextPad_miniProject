/** 
* @file masterAccountFunctions.h
* Functions related to master useraccount
*
*/

#ifndef __MASTER_ACCOUNT_FUNCTIONS_H__
#define __MASTER_ACCOUNT_FUNCTIONS_H__

#define UserFile "MasterUserData.dat"

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include <stdbool.h>
#include <string.h>
#include <openssl/evp.h>
#include <openssl/sha.h>
#include <sys/stat.h>
#include <unistd.h>

#include "passwordUsernameFormatChecker.h"

typedef enum
{
    SUCCESS = 1,
    FAILURE = 0

} status;

/**
*  create a new Mater User Account
* @return  0 if Master User Account created successfully
*/
status createMasterUserAccount();

/**
*  create a new Mater User Account
* @return  0 if Master User Account deleted successfully
*/
status deleteMasterUserAccount();

/**
*  To change Master user name
* @return  0 if Master Username changed successfully
*/
status modifyMasterUsername();

/**
*  To change Master user name
* @return  0 if Master Password changed successfully
*/
status modifyMasterPassword();

/**
*  match enterd password and username with existing master user credentials
* @param[in] username_string
* @param[in] password_string
* @return  true if credial entered are correct
*/
bool verifyMasterUserAccount(const char *username, const char *password);

/**
*  check if master user account exist.
* @return  true if master account exist. 
*/
bool masterUserAccountExist();

#endif /* #define __MASTER_ACCOUNT_FUNCTIONS_H__*/