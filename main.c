#include <msp430.h>

typedef enum
{

} spi_result;


int main(void)
{
  return 0;
}

spi_result spi_transfer_byte(const uint8_t data);
spi_result spi_read_byte(const uint8_t data);


void spi_init(void)
{}

static inline void spi_set_tx_byte(uint8_t byte);
static inline void 
