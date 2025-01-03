/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FedStats.framework/FedStats
 */

@interface FedStatsCategoricalTypeHuffmanEncoder : NSObject <FedStatsCategoricalTypePreEncoderProtocol> {
    NSString * _codeColumnName;
    NSString * _endTokenBitString;
    <FedStatsCategoricalTypeTokenizerProtocol> * _explorationTokenizer;
    FedStatsSQLiteDatabase * _huffmanDB;
    NSString * _lookupColumnName;
    NSDictionary * _specialTokenBitStrings;
    NSString * _tableName;
    NSString * _unknownTokenBitString;
}

@property (nonatomic, readonly, copy) NSString *codeColumnName;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *endTokenBitString;
@property (nonatomic, readonly, copy) <FedStatsCategoricalTypeTokenizerProtocol> *explorationTokenizer;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) FedStatsSQLiteDatabase *huffmanDB;
@property (nonatomic, readonly, copy) NSString *lookupColumnName;
@property (nonatomic, readonly, copy) NSDictionary *specialTokenBitStrings;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *tableName;
@property (nonatomic, readonly, copy) NSString *unknownTokenBitString;

+ (id)instanceWithParameters:(id)arg1 error:(id*)arg2;
+ (id)mutateParameters:(id)arg1 usingFieldValues:(id)arg2 assetURLs:(id)arg3 requiredFields:(id*)arg4 assetNames:(id*)arg5 error:(id*)arg6;

- (void).cxx_destruct;
- (id)codeColumnName;
- (id)codeForToken:(id)arg1;
- (id)endTokenBitString;
- (id)explorationTokenizer;
- (id)huffmanDB;
- (id)initWithHuffmanEncoderDatabase:(id)arg1 tableName:(id)arg2 lookupColumnName:(id)arg3 codeColumnName:(id)arg4 unknownTokenBitString:(id)arg5 endTokenBitString:(id)arg6 specialTokenBitStrings:(id)arg7 exploreUnknownToken:(bool)arg8;
- (id)lookupColumnName;
- (id)preEncode:(id)arg1;
- (id)specialTokenBitStrings;
- (id)tableName;
- (id)unknownTokenBitString;

@end
