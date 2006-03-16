/**
 * @file hmac_signer_test.h
 * 
 * @brief Tests for the hmac_signer_t class.
 * 
 */

/*
 * Copyright (C) 2005 Jan Hutter, Martin Willi
 * Hochschule fuer Technik Rapperswil
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.  See <http://www.fsf.org/copyleft/gpl.txt>.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 */

#ifndef HMAC_SIGNER_TEST_H_
#define HMAC_SIGNER_TEST_H_

#include <utils/tester.h>

/**
 * @brief Test function used to test the hmac sign functionality using MD5.
 *
 * @param tester associated tester object
 * 
 * @ingroup testcases
 */
void test_hmac_md5_signer(protected_tester_t *tester);

/**
 * @brief Test function used to test the hmac sign functionality using SHA1.
 *
 * @param tester associated tester object
 * 
 * @ingroup testcases
 */
void test_hmac_sha1_signer(protected_tester_t *tester);

#endif /* HMAC_SIGNER_TEST_H_ */
