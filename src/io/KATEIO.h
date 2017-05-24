#ifndef IO_KATEIO_H
#define IO_KATEIO_H

#include "USBDriver.h"

// Dedicated USB VID/PID for the Kate-IO.  Purchased from MCS
#define KATEIO_VID 0x16D0
#define KATEIO_PID 0x0D02

class KATEIO: public USBDriver
{
public:
	// Does the device match the specified vendor ID and product ID?
	static bool DeviceMatches( int iVendorID, int iProductID );

	bool Open();

	bool Read( uint32_t *pData );
	bool Write( const uint32_t iData );
	bool BulkReadWrite( uint32_t pData[8] );
};

#endif /* IO_KATEIO_H */
