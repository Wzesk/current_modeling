/* This file is part of FES library.

   FES is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   FES is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with FES.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "angle.h"

/**
 @brief Compute the speed in degree by hour for the moon's mean
 longitude (s)
 */
double s_speed() {
  return (((1336.0 * 360.0 + 307.892) / JULIAN_CENTURY)) * 3600.0;
}

/**
 @brief Compute the speed in degree by hour for the sun's mean
 longitude (h)
 */
double h_speed() {
  return (((100.0 * 360.0 + 0.769) / JULIAN_CENTURY)) * 3600.0;
}

/**
 @brief Compute the speed in degree by hour for the longitude of
 moon's perigee (p)
 */
double p_speed() {
  return (((11.0 * 360.0 + 109.032) / JULIAN_CENTURY)) * 3600.0;
}

/**
 @brief Compute the speed in degree by hour for the longitude of
 moon's ascending node (N′)
 */
double n_speed() {
  return (((-5.0 * 360.0 - 134.142) / JULIAN_CENTURY)) * 3600.0;
}

/**
 @brief Compute the speed in degree by hour for the longitude of
 sun's perigee (p₁)
 */
double p1_speed() {
  return ((1.719 / JULIAN_CENTURY)) * 3600;
}

/**
 @brief Compute the speed in degree by hour for the local mean
 lunar time (τ)
 */
double tau_speed() {
  return 15.0 - s_speed() + h_speed();
}

/**
 @brief Compute the frequency in degree by hour for the moon's mean
 longitude (s)
 */
double s_frequency() {
  return 1.0 / ((15.0 / s_speed()) * 24.0);
}

/**
 @brief Compute the frequency in degree by hour for the sun's mean
 longitude (h)
 */
double h_frequency() {
  return 1.0 / ((15.0 / h_speed()) * 24.0);
}

/**
 @brief Compute the frequency in degree by hour for the longitude of
 moon's perigee (p)
 */
double p_frequency() {
  return 1.0 / ((15.0 / p_speed()) * 24.0);
}

/**
 @brief Compute the frequency in degree by hour for the longitude of
 moon's ascending node (N′)
 */
double n_frequency() {
  return 1.0 / ((15.0 / n_speed()) * 24.0);
}

/**
 @brief Compute the frequency in degree by hour for the longitude of
 sun's perigee (p₁)
 */
double p1_frequency() {
  return 1.0 / ((15.0 / p1_speed()) * 24.0);
}

/**
 @brief Compute the frequency in degree by hour for the local mean
 lunar time (τ)
 */
double tau_frequency() {
  return 1.0 / ((15.0 / tau_speed()) * 24.0);
}