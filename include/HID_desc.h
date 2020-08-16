typedef struct
{
	uint8_t  bLength,
	uint8_t  bDescriptorType,
	uint16_t bcdUSB,
	uint8_t  bDeviceClass,
	uint8_t  bDeviceSubClass,
	uint8_t  bDeviceProtocol,
	uint8_t  bMaxPacketSize0,
	uint16_t idVendor,
	uint16_t idProduct,
	uint16_t bcdDevice,
	uint8_t  iManufacturer,
	uint8_t  iProduct,
	uint8_t  iSerialNumber,
	uint8_t  bNumConfigurations
}

typedef struct
{
	uint8_t  bLength,
	uint8_t  bDescriptorType,
	uint16_t bcdHID,
	uint8_t  bCountryCode,
	uint8_t  bNumDescriptors,
	uint8_t  bDescriptorType,
	uint16_t bDescriptorLength
	//Not COMPLETE
} HID_Descriptor_typedef
