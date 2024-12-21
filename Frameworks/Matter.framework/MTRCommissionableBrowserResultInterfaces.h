/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRCommissionableBrowserResultInterfaces : NSObject {
    struct Optional<chip::Dnssd::CommonResolutionData> { 
        bool mHasValue; 
        union Value { 
            struct CommonResolutionData { 
                struct InterfaceId { 
                    unsigned int mPlatformInterface; 
                } interfaceId; 
                unsigned long long numIPs; 
                struct IPAddress { 
                    unsigned int Addr[4]; 
                } ipAddress[5]; 
                unsigned short port; 
                BOOL hostName[41]; 
                bool supportsTcpClient; 
                bool supportsTcpServer; 
                struct optional<bool> { 
                    union { 
                        BOOL __null_state_; 
                        bool __val_; 
                    } ; 
                    bool __engaged_; 
                } isICDOperatingAsLIT; 
                struct optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> { 
                    union { 
                        BOOL __null_state_; 
                        struct duration<unsigned int, std::ratio<1, 1000>> { 
                            unsigned int __rep_; 
                        } __val_; 
                    } ; 
                    bool __engaged_; 
                } mrpRetryIntervalIdle; 
                struct optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> { 
                    union { 
                        BOOL __null_state_; 
                        struct duration<unsigned int, std::ratio<1, 1000>> { 
                            unsigned int __rep_; 
                        } __val_; 
                    } ; 
                    bool __engaged_; 
                } mrpRetryIntervalActive; 
                struct optional<std::chrono::duration<unsigned short, std::ratio<1, 1000>>> { 
                    union { 
                        BOOL __null_state_; 
                        struct duration<unsigned short, std::ratio<1, 1000>> { 
                            unsigned short __rep_; 
                        } __val_; 
                    } ; 
                    bool __engaged_; 
                } mrpRetryActiveThreshold; 
            } mData; 
        } mValue; 
    }  _resolutionData;
}

@property (nonatomic) struct Optional<chip::Dnssd::CommonResolutionData> { bool x1; union Value { struct CommonResolutionData { struct InterfaceId { unsigned int x_1_3_1; } x_1_2_1; unsigned long long x_1_2_2; struct IPAddress { unsigned int x_3_3_1[4]; } x_1_2_3[5]; unsigned short x_1_2_4; BOOL x_1_2_5[41]; bool x_1_2_6; bool x_1_2_7; struct optional<bool> { union { BOOL x_1_4_1; bool x_1_4_2; } x_8_3_1; bool x_8_3_2; } x_1_2_8; /* Warning: unhandled struct encoding: '{optional<std::chrono::duration<unsigned int' */ struct x_1_2_9; } x_2_1_1; } x2; } resolutionData; /* unknown property attribute:  1000>>=S})B}})} */

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Optional<chip::Dnssd::CommonResolutionData> { bool x1; union Value { struct CommonResolutionData { struct InterfaceId { unsigned int x_1_3_1; } x_1_2_1; unsigned long long x_1_2_2; struct IPAddress { unsigned int x_3_3_1[4]; } x_1_2_3[5]; unsigned short x_1_2_4; BOOL x_1_2_5[41]; bool x_1_2_6; bool x_1_2_7; struct optional<bool> { union { BOOL x_1_4_1; bool x_1_4_2; } x_8_3_1; bool x_8_3_2; } x_1_2_8; struct optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> { union { BOOL x_1_4_1; struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int x_2_5_1; } x_1_4_2; } x_9_3_1; bool x_9_3_2; } x_1_2_9; struct optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> { union { BOOL x_1_4_1; struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int x_2_5_1; } x_1_4_2; } x_10_3_1; bool x_10_3_2; } x_1_2_10; struct optional<std::chrono::duration<unsigned short, std::ratio<1, 1000>>> { union { BOOL x_1_4_1; struct duration<unsigned short, std::ratio<1, 1000>> { unsigned short x_2_5_1; } x_1_4_2; } x_11_3_1; bool x_11_3_2; } x_1_2_11; } x_2_1_1; } x2; })resolutionData;
- (void)setResolutionData:(struct Optional<chip::Dnssd::CommonResolutionData> { bool x1; union Value { struct CommonResolutionData { struct InterfaceId { unsigned int x_1_3_1; } x_1_2_1; unsigned long long x_1_2_2; struct IPAddress { unsigned int x_3_3_1[4]; } x_1_2_3[5]; unsigned short x_1_2_4; BOOL x_1_2_5[41]; bool x_1_2_6; bool x_1_2_7; struct optional<bool> { union { BOOL x_1_4_1; bool x_1_4_2; } x_8_3_1; bool x_8_3_2; } x_1_2_8; struct optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> { union { BOOL x_1_4_1; struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int x_2_5_1; } x_1_4_2; } x_9_3_1; bool x_9_3_2; } x_1_2_9; struct optional<std::chrono::duration<unsigned int, std::ratio<1, 1000>>> { union { BOOL x_1_4_1; struct duration<unsigned int, std::ratio<1, 1000>> { unsigned int x_2_5_1; } x_1_4_2; } x_10_3_1; bool x_10_3_2; } x_1_2_10; struct optional<std::chrono::duration<unsigned short, std::ratio<1, 1000>>> { union { BOOL x_1_4_1; struct duration<unsigned short, std::ratio<1, 1000>> { unsigned short x_2_5_1; } x_1_4_2; } x_11_3_1; bool x_11_3_2; } x_1_2_11; } x_2_1_1; } x2; })arg1;

@end