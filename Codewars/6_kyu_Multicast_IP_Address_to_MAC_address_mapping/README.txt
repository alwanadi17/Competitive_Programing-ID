Description:
Concept
Multicast IP addresses, which range from 224.0.0.0 to 239.255.255.255, are defined by the leading address bits of 1110. In Classless Inter-Domain Routing (CIDR) prefix, this group is 224.0.0.0/4.1

To support IP multicasting, the Internet authorities have reserved the multicast MAC address range of 01:00:5E:00:00:00 to 01:00:5E:7F:FF:FF. That means lowest 23 bits of the MAC address are available for mapping.2

To create a multicast MAC address, the lower 23 bits of the MAC address are set to the corresponding lower 23 bits of the IP address.

For example, 224.0.0.1 should be mapped to MAC address 01:00:5E:00:00:01.

Since lowest 23 bits is not enough to fit all multicast IP addresses, some IP will be mapped to same MAC address. For example, 224.0.0.1 and 225.0.0.1 both are mapped to 01:00:5E:00:00:01.

Task
Here you need to write a function to translate a multicast address to valid MAC address. All inputs are valid multicast IP addresses, you must return a string with MAC address. Characters must be capitalized.

Links : https://www.codewars.com/kata/5a9d43ceba1bb52492000080