/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TokenGenerationInference.framework/TokenGenerationInference
 */

@interface TGIE5AdapterConfigurationObjC : NSObject {
    NSString * _adapterType;
    NSString * _description;
    NSString * _mutableWeightsFilePath;
    NSString * _symbolName;
}

@property (readonly, copy) NSString *adapterType;
@property (readonly, copy) NSString *mutableWeightsFilePath;
@property (readonly, copy) NSString *symbolName;

- (void).cxx_destruct;
- (struct TGIE5AdapterConfiguration { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { BOOL x_1_5_1[23]; unsigned char x_1_5_2[0]; unsigned int x_1_5_3 : 7; unsigned int x_1_5_4 : 1; } x_1_4_1; struct __long { char *x_2_5_1; unsigned long long x_2_5_2; unsigned int x_2_5_3 : 63; unsigned int x_2_5_4 : 1; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_1_1_1; } x1; struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __short { BOOL x_1_5_1[23]; unsigned char x_1_5_2[0]; unsigned int x_1_5_3 : 7; unsigned int x_1_5_4 : 1; } x_1_4_1; struct __long { char *x_2_5_1; unsigned long long x_2_5_2; unsigned int x_2_5_3 : 63; unsigned int x_2_5_4 : 1; } x_1_4_2; struct __raw { unsigned long long x_3_5_1[3]; } x_1_4_3; } x_1_3_1; } x_1_2_1; } x_2_1_1; } x2; })adapterConfiguration;
- (id)adapterType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAdapterType:(id)arg1 symbolName:(id)arg2 mutableWeightsFilePath:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)mutableWeightsFilePath;
- (id)symbolName;

@end