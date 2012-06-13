require "serialport"

port_str = "/dev/tty.usbmodem621"
baud_rate = 9600
data_bits = 8
stop_bits = 1
parity = SerialPort::NONE

sp = SerialPort.new(port_str, baud_rate, data_bits, stop_bits, parity)

sp.putc '1'

sp.close
