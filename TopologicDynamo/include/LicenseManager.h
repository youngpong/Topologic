//
//  license-manager.h
//  License++
//
//  Copyright © 2018-present Zuhd Web Services
//  https://zuhd.org
//
//  See https://github.com/zuhd-org/licensepp/blob/master/LICENSE 
//

#ifndef LICENSE_MANAGER_H
#define LICENSE_MANAGER_H

#include <license++/base-license-manager.h>
#include <license++/issuing-authority.h>

using namespace licensepp;

class LicenseKeysRegister
{
public:
    static const unsigned char LICENSE_MANAGER_SIGNATURE_KEY[];

    static const std::vector<IssuingAuthority> LICENSE_ISSUING_AUTHORITIES;
};

const unsigned char LicenseKeysRegister::LICENSE_MANAGER_SIGNATURE_KEY[] =
{
	//16EDCACA99C95B70BB6683D607961A3F
	0x16, 0xED, 0xCA, 0xCA, 0x99, 0xC9, 0x5B, 0x70, 0xBB, 0x66, 0x83, 0xD6, 0x07, 0x96, 0x1A, 0x3F
};

const std::vector<IssuingAuthority> LicenseKeysRegister::LICENSE_ISSUING_AUTHORITIES = {
    IssuingAuthority(
		"topologic-team", 
		"Topologic Team", 
		"LS0tLS1CRUdJTiBSU0EgUFJJVkFURSBLRVktLS0tLQpQcm9jLVR5cGU6IDQsRU5DUllQVEVECkRFSy1JbmZvOiBBRVMtMjU2LUNCQyw0ODlDQTNFOEYxMkNDQTBFQjQwMzREQ0MwQ0VBQzQzRgoKRWRxQ3RobFpSVDIwNE5LRUlCcS9FVFVTak1vL0VVb21JSElvV0sySmY3M3phSzZsekJtREExai9Fb3NrWFlFWAp5N2d2YisvYzdTcWNGVU1WS0NkNU94QzRTTE1vYmp1RUFRZDZndjFubFcwMEc1eGFpTmpxNWRKRk9vcVRwMko3Cmg4OSthM0M0UWEzL21FaHl4WG1rWEo0R1VSOXE1VHJWUm1NYzQ4ZU16WTZwaWVKdXh6WXFoTmxXQUVlMTVpSFQKUmlRRHhtWXFjTXNlWUpyZERFTUxXZ1h1c3c3ZllaSjVKbGxHcU85ZEx6Z284MWJOYnZ2MlBNM3dWTlhVakJQRAoyaS9VK1ZQNmZHTnl5V2Jsak5FNkp6SytoVUhJT3ROQ3l2Ym5zOFF4L0tVTFlRbyt3SmVqY2EzL2tIQ1ZmUEFzCmw5RjdhMEsxc0xac1dnNlVrZEg5SVYvdUtMdTh4V3pOSTZHNDlTa3p6enVyclA3eEtDYW4rN29xc29KM2t1WFYKemtpNnFUOHFENWJWdUR3d2JmMng5djV4Tis4aVBsMEtDckw1TXBvRGhzSjVSNjRaVHYyYWpJZk1LRnhkcmQ5MApiZ3Q5K1dWUGRaOVB1ZVlPSHBlUDJ0NEhrOENZcmtsZURrRzZuQ05KZEo3MHlTekRsNzFqWUdkQ0wrNWhIYVlmCnRpaW50MmxFb0hMQ2twbkVnVFJ5LytKWU1vMDdZbDZ0VWpKZm1BSlk2RDdGM3RKRk4wOFllTzVCU3Q5YktqcDUKUHpxQzMrN05laXVFVll1b2pHTElVVDdHME9McUNDa21sQWM3Zlp1V01jQ09BdEo2aXFnRkI5S0hTRU9waDJWRQpxNGwwYnFSZlY1WWhTcFQ4ZDRVM3R1bXRTdkxKLzVXOE1GcFc5dm00Z1MyUW8rNHdreFcxV2RQdDZQOVRHMkpGClBMc2Z4UlBicE1pTEsvWUZVRW5qRW5mUEZ0cmtqMTFCTEVjNU8xRGc1dDlMVnJSR0VBV1Y4dWowVGQ3b2cvN0kKT3IwZmt2TFprS25HbW0vS2t2MXVMWmNkWk10VUNaMEFpRG8rYytNUkQ5b2NsbXJ6SUF2ZlF6eGpZZFNQVDhzdQowMnJQcDAyWGVlckIwdHRibldQRzI0WEo3UVdmMVRTQmU1dlBVSm41cHo4V2tpMDd2SXBtQ254cE4rd21idi9TCjBLTlZvdHlGU1Uzajh0MDgvMWlORUQwcEtFRE1VR3NyQjJSNzJmK0FwZkVrVXh6Y0JCcVNzalphLzJPUWJ4dDMKeFR0Y1NXUTczcEd2blpUVmsyemdnc0F5ZVZuTGN2WGZmeEc1K3BhbDFDR2lqQWZ2YllUd2MzWnI3dFUrVVhzMQpHZ3kwVmxUaCsvZjhrR1d5L0daVTdyd1dtSXFodXJNamIyei9JeDBWc3J5eWxiTWtoajJIWko4M0VKWDFnb0JDCnkwK2NxdFE1dDR1UGU1YTZOZHIvSWpubGZTS3BPRFNTRGNIOXpZTVBCUXVIYmEyNUhVanRXeEpnd0FMWlFsUXEKSHZjT0R5QzFtdmVMMXM3eGt3UGdWb1RIWHJWQ0tSSldrUS9NNTBPVEEwZHBlRW9tVE1MQ0xnMmNFWisvbzAvNwp0clVOaWdXOUdTY254YTNWME5pb2dTUUlKZ3hjbTZ2M1RadVhhZUowWlR5RFFJb3h4Qmt3S3JOTzhNaU9WV2VOClgyTk5zckFTdXVSWXVjQ1VtazNSY0pzcDNtTEIwR2tNaDEwaElTS0tjYnBCSWJMckxjeW4wamdJVkRIekRZSFUKemdtbFZiY0NsRUJUSE5NbXl2QjZVU1RBWjRNMEZoNjRvNmFjbEJZbnNUZDhidFI1eXpiNldxaWd0SDlpM1cxTgpCTGpiam1FMTVodHNVa1dGUUhoMXF1dnV5Z2MwYnVPa0dESlRVQnlJdlZmRVZvUFhOdjE4RWRpcWQ2WGs1WXpiCmRsRjJCWnR4Z1YycE1UQnh1bzF0NC9Fekw1cmlmV0ZqRjBoYmRzcTZvdzZPZktrWEg4NXJMSko2VmNYSWZuckgKQUJGNml1U1BDUFR4QXZjYkNnRnZTYkV1Z1p6MnhBRE1hWkVOL21wTXgxcGx2UndBYzJxQXJxbER3M3BQeVBLMgotLS0tLUVORCBSU0EgUFJJVkFURSBLRVktLS0tLQo=:LS0tLS1CRUdJTiBQVUJMSUMgS0VZLS0tLS0KTUlJQklEQU5CZ2txaGtpRzl3MEJBUUVGQUFPQ0FRMEFNSUlCQ0FLQ0FRRUF0dDdPNlRXVDdBc3NSQTFCN1R6Kwo0bE1lQUZHVlRvY2N0dHhIYTBZOWZNeHlzYkpaWC92RWExUkxzVnA3NzVNM09jUmhmbXZzVEZrRFNuc2dVckdnCmp0M2w0RGR4Ny9HYmR6YlIwTjU1NHJkT0phd3ErRFdIUkpSSG9QYWFHWmEzNDJmUVpjSXlRaCsrUHlRSlpUZlQKbkp3UXN4amNITTRnZXgwemdFSEVVOUFzYnVhNmxvN0NnV0tXcFhRYVI1enByUUtPNnM4a1l0QTI0NjdVMEVScgp0UHRaL2hmb2RpaU5Ncmc3WlFVMW9PbTZNTU5FSjJyZFJQRGZCYTdwVG1qNzY3dW5CeW1aWHB0L1FHODBzUEYwCmJ0U1FZZ1hPV25JYXVObGFKWVR0WXlWTjJwRE5pUHRFR1cySml6UVprVnN0aUcrU3c3RWRkaG1MeHJyTlpJSXYKWFFJQkVRPT0KLS0tLS1FTkQgUFVCTElDIEtFWS0tLS0tCg==", 
		87600U, 
		true), // 10 years max
};
class LicenseManager : public BaseLicenseManager<LicenseKeysRegister>
{
public:
    LicenseManager()
        : BaseLicenseManager()
    {
    }
};

#endif // LICENSE_MANAGER_H