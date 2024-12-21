/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface SPQUParse : NSObject {
    NSString * _intentLabel;
    NSNumber * _intentLabelId;
    NSNumber * _isPQA;
    NSArray * _tokenArguments;
}

@property (nonatomic, retain) NSString *intentLabel;
@property (nonatomic, retain) NSNumber *intentLabelId;
@property (nonatomic, retain) NSNumber *isPQA;
@property (nonatomic, retain) NSArray *tokenArguments;

- (void).cxx_destruct;
- (id)getEncodedData;
- (id)initWithIntentLabel:(id)arg1 tokenArguments:(id)arg2;
- (id)initWithIntentLabel:(id)arg1 tokenArguments:(id)arg2 isPQA:(bool)arg3;
- (id)intentLabel;
- (id)intentLabelId;
- (id)isPQA;
- (void)setIntentLabel:(id)arg1;
- (void)setIntentLabelId:(id)arg1;
- (void)setIsPQA:(id)arg1;
- (void)setTokenArguments:(id)arg1;
- (id)tokenArguments;

@end