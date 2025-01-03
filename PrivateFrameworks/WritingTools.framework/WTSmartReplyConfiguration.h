/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WritingTools.framework/WritingTools
 */

@interface WTSmartReplyConfiguration : NSObject <NSSecureCoding> {
    NSString * _baseResponse;
    NSString * _entryPoint;
    TIInputContextHistory * _inputContextHistory;
}

@property (nonatomic, retain) NSString *baseResponse;
@property (nonatomic, retain) NSString *entryPoint;
@property (nonatomic, readonly) TIInputContextHistory *inputContextHistory;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)baseResponse;
- (void)encodeWithCoder:(id)arg1;
- (id)entryPoint;
- (id)initWithCoder:(id)arg1;
- (id)initWithInputContextHistory:(id)arg1;
- (id)inputContextHistory;
- (void)setBaseResponse:(id)arg1;
- (void)setEntryPoint:(id)arg1;

@end
