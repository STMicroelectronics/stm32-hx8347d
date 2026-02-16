/*
 ******************************************************************************
 * @file    hx8347d_reg.c
 * @author  LCD Software Solution Team
 * @brief   HX8347d driver file
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2018 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

#include "hx8347d_reg.h"

/** @addtogroup BSP
  * @{
  */

/** @addtogroup Components
  * @{
  */

/** @addtogroup HX8347D
  * @{
  */

/** @addtogroup HX8347D_REG_Exported_Functions
  * @{
  */

/**
  * @brief  Read generic device register
  *
  * @param  hx8347d_ctx_t* ctx: read / write interface definitions
  * @param  uint8_t reg: register to read
  * @param  uint8_t* data: pointer to buffer that store the data read
  * @param  uint16_t len: number of consecutive register to read
  *
  */
int32_t hx8347d_read_reg(hx8347d_ctx_t *ctx, uint16_t reg, uint8_t* data, uint32_t length)
{
  return ctx->ReadReg(ctx->handle, reg, data, length);
}

/**
  * @brief  Write generic device register
  *
  * @param  hx8347d_ctx_t *ctx: read / write interface definitions
  * @param  uint8_t reg: register to write
  * @param  uint8_t* data: pointer to data to write in register reg
  *
*/
int32_t hx8347d_write_reg(hx8347d_ctx_t *ctx, uint16_t reg, uint8_t *data, uint32_t length)
{
  return ctx->WriteReg(ctx->handle, reg, data, length);
}

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */

