// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (C) 2021  Ammar Faizi <ammarfaizi2@gmail.com>
 */
int sumTriangularNumbers(int n)
{
	/*
	 * f(n) = \sum_{i = 1}^{n} \left( \sum_{j = 1}^{i} j \right) \\
	 * = \sum_{i = 1}^{n} \left( \frac{j \cdot (j + 1)}{2} \right) \\
	 * = \frac{n \cdot \left( n + 1 \right) \cdot \left( n + 2 \right)}{6}
	 */
	return n > 0 ? (n * (n + 1) * (n + 2) / 6) : 0;
}
