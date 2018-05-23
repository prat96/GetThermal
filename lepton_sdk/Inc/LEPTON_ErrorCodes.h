#ifndef _LEPTON_ERROR_CODES_H_
   #define _LEPTON_ERROR_CODES_H_

   #ifdef __cplusplus
extern "C"
{
   #endif

/******************************************************************************/
/** INCLUDE FILES                                                            **/
/******************************************************************************/

/******************************************************************************/
/** EXPORTED DEFINES                                                         **/
/******************************************************************************/

/******************************************************************************/
/** EXPORTED TYPE DEFINITIONS                                                **/
/******************************************************************************/

/******************************************************************************/
/*
 * Represents the different result codes the camera can return. 
 */
typedef enum Result
{
   LEP_OK                            = 0,     /* Camera ok */
   LEP_COMM_OK                       = LEP_OK, /* Camera comm ok (same as LEP_OK) */

   LEP_ERROR                         = -1,    /* Camera general error */
   LEP_NOT_READY                     = -2,    /* Camera not ready error */
   LEP_RANGE_ERROR                   = -3,    /* Camera range error */
   LEP_CHECKSUM_ERROR                = -4,    /* Camera checksum error */
   LEP_BAD_ARG_POINTER_ERROR         = -5,    /* Camera Bad argument  error */
   LEP_DATA_SIZE_ERROR               = -6,    /* Camera byte count error */
   LEP_UNDEFINED_FUNCTION_ERROR      = -7,    /* Camera undefined function error */
   LEP_FUNCTION_NOT_SUPPORTED        = -8,    /* Camera function not yet supported error */
   LEP_DATA_OUT_OF_RANGE_ERROR       = -9,    /* Camera input DATA is out of valid range error */
   LEP_COMMAND_NOT_ALLOWED           = -11,   /* Camera unable to execute command due to current camera state */

   /* OTP access errors */
   LEP_OTP_WRITE_ERROR               = -15,   /*!< Camera OTP write error */
   LEP_OTP_READ_ERROR				    = -16,   /* double bit error detected (uncorrectible) */

   LEP_OTP_NOT_PROGRAMMED_ERROR      = -18,   /* Flag read as non-zero */

   /* I2C Errors */
   LEP_ERROR_I2C_BUS_NOT_READY       = -20,   /* I2C Bus Error - Bus Not Avaialble */
   LEP_ERROR_I2C_BUFFER_OVERFLOW     = -22,   /* I2C Bus Error - Buffer Overflow */
   LEP_ERROR_I2C_ARBITRATION_LOST    = -23,   /* I2C Bus Error - Bus Arbitration Lost */
   LEP_ERROR_I2C_BUS_ERROR           = -24,   /* I2C Bus Error - General Bus Error */
   LEP_ERROR_I2C_NACK_RECEIVED       = -25,   /* I2C Bus Error - NACK Received */
   LEP_ERROR_I2C_FAIL                = -26,   /* I2C Bus Error - General Failure */
   
   /* Processing Errors */
   LEP_DIV_ZERO_ERROR                = -80,   /* Attempted div by zero */

   /* Comm Errors */
   LEP_COMM_PORT_NOT_OPEN            = -101,  /* Comm port not open */
   LEP_COMM_INVALID_PORT_ERROR       = -102,  /* Comm port no such port error */
   LEP_COMM_RANGE_ERROR              = -103,  /* Comm port range error */
   LEP_ERROR_CREATING_COMM           = -104,  /* Error creating comm */
   LEP_ERROR_STARTING_COMM           = -105,  /* Error starting comm */
   LEP_ERROR_CLOSING_COMM            = -106,  /* Error closing comm */
   LEP_COMM_CHECKSUM_ERROR           = -107,  /* Comm checksum error */
   LEP_COMM_NO_DEV                   = -108,  /* No comm device */
   LEP_TIMEOUT_ERROR                 = -109,  /* Comm timeout error */
   LEP_COMM_ERROR_WRITING_COMM       = -110,  /* Error writing comm */
   LEP_COMM_ERROR_READING_COMM       = -111,  /* Error reading comm */
   LEP_COMM_COUNT_ERROR              = -112,  /* Comm byte count error */

   /* Other Errors */
   LEP_OPERATION_CANCELED            = -126,  /* Camera operation canceled */
   LEP_UNDEFINED_ERROR_CODE          = -127   /* Undefined error */

} LEP_RESULT;

/** EXPORTED PUBLIC DATA                                                     **/
/******************************************************************************/

/******************************************************************************/
/** EXPORTED PUBLIC FUNCTIONS                                                **/
/******************************************************************************/


   #ifdef __cplusplus
}
   #endif

#endif /* _LEPTON_ERROR_CODES_H_ */
