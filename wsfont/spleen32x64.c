/*
 * Spleen 1.7.0
 * Copyright (c) 2018-2020, Frederic Cambus
 * https://www.cambus.net/
 *
 * Created:      2020-06-20
 * Last Updated: 2020-06-20
 *
 * Spleen is released under the BSD 2-Clause license.
 * See LICENSE file for details.
 */

#include <stdio.h>
#include <time.h>

#include <dev/wscons/wsconsio.h>
#include <dev/wsfont/spleen32x64.h>

int main() {
	size_t loop;

	for (loop = 0; loop < 32 * 4 * 64; loop++)
		printf("%c", 0);

	for (loop = 0; loop < 224 * 4 * 64; loop++)
		printf("%c", spleen32x64_data[loop]);

	return 0;
}