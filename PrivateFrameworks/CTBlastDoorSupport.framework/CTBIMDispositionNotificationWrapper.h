/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CTBlastDoorSupport.framework/CTBlastDoorSupport
 */

@interface CTBIMDispositionNotificationWrapper : NSObject {
    struct optional<ctb::IMDispositionNotification> { 
        union { 
            BOOL __null_state_; 
            struct IMDispositionNotification { 
                int fDispositionType; 
                struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
                    struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
                        struct __rep { 
                            union { 
                                struct __short { 
                                    BOOL __data_[23]; 
                                    unsigned char __padding_[0]; 
                                    unsigned int __size_ : 7; 
                                    unsigned int __is_long_ : 1; 
                                } __s; 
                                struct __long { 
                                    char *__data_; 
                                    unsigned long long __size_; 
                                    unsigned int __cap_ : 63; 
                                    unsigned int __is_long_ : 1; 
                                } __l; 
                                struct __raw { 
                                    unsigned long long __words[3]; 
                                } __r; 
                            } ; 
                        } __value_; 
                    } __r_; 
                } fMessageID; 
                struct basic_string<char, std::char_traits<char>, std::allocator<char>> { 
                    struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { 
                        struct __rep { 
                            union { 
                                struct __short { 
                                    BOOL __data_[23]; 
                                    unsigned char __padding_[0]; 
                                    unsigned int __size_ : 7; 
                                    unsigned int __is_long_ : 1; 
                                } __s; 
                                struct __long { 
                                    char *__data_; 
                                    unsigned long long __size_; 
                                    unsigned int __cap_ : 63; 
                                    unsigned int __is_long_ : 1; 
                                } __l; 
                                struct __raw { 
                                    unsigned long long __words[3]; 
                                } __r; 
                            } ; 
                        } __value_; 
                    } __r_; 
                } fDateTime; 
            } __val_; 
        } ; 
        bool __engaged_; 
    }  _wrapped;
}

@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{optional<ctb::IMDispositionNotification>=(?=c{IMDispositionNotification=i{basic_string<char' */ struct  wrapped; /* unknown property attribute:  std::allocator<char>>={__rep=(?={__short=[23c][0C]b7b1}{__long=*Qb63b1}{__raw=[3Q]})}}}})B} */

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithWrapped:(struct optional<ctb::IMDispositionNotification> { union { BOOL x_1_1_1; struct IMDispositionNotification { int x_2_2_1; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { BOOL x_1_7_1[23]; unsigned char x_1_7_2[0]; unsigned int x_1_7_3 : 7; unsigned int x_1_7_4 : 1; } x_1_6_1; struct __long { char *x_2_7_1; unsigned long long x_2_7_2; unsigned int x_2_7_3 : 63; unsigned int x_2_7_4 : 1; } x_1_6_2; struct __raw { unsigned long long x_3_7_1[3]; } x_1_6_3; } x_1_5_1; } x_1_4_1; } x_2_3_1; } x_2_2_2; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { BOOL x_1_7_1[23]; unsigned char x_1_7_2[0]; unsigned int x_1_7_3 : 7; unsigned int x_1_7_4 : 1; } x_1_6_1; struct __long { char *x_2_7_1; unsigned long long x_2_7_2; unsigned int x_2_7_3 : 63; unsigned int x_2_7_4 : 1; } x_1_6_2; struct __raw { unsigned long long x_3_7_1[3]; } x_1_6_3; } x_1_5_1; } x_1_4_1; } x_3_3_1; } x_2_2_3; } x_1_1_2; } x1; })arg1;
- (struct optional<ctb::IMDispositionNotification> { union { BOOL x_1_1_1; struct IMDispositionNotification { int x_2_2_1; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { BOOL x_1_7_1[23]; unsigned char x_1_7_2[0]; unsigned int x_1_7_3 : 7; unsigned int x_1_7_4 : 1; } x_1_6_1; struct __long { char *x_2_7_1; unsigned long long x_2_7_2; unsigned int x_2_7_3 : 63; unsigned int x_2_7_4 : 1; } x_1_6_2; struct __raw { unsigned long long x_3_7_1[3]; } x_1_6_3; } x_1_5_1; } x_1_4_1; } x_2_3_1; } x_2_2_2; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { BOOL x_1_7_1[23]; unsigned char x_1_7_2[0]; unsigned int x_1_7_3 : 7; unsigned int x_1_7_4 : 1; } x_1_6_1; struct __long { char *x_2_7_1; unsigned long long x_2_7_2; unsigned int x_2_7_3 : 63; unsigned int x_2_7_4 : 1; } x_1_6_2; struct __raw { unsigned long long x_3_7_1[3]; } x_1_6_3; } x_1_5_1; } x_1_4_1; } x_3_3_1; } x_2_2_3; } x_1_1_2; } x1; })wrapped;

@end
