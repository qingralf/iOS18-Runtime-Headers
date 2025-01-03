/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/InputAnalytics.framework/InputAnalytics
 */

@interface IATextInputActionsSessionDictationBeganAction : IATextInputActionsSessionAction {
    unsigned long long  _dictationBeganCount;
    unsigned long long  _modelessUsedAtLeastOnceCount;
    unsigned long long  _multiModalDictationBeganCount;
}

@property (nonatomic) unsigned long long dictationBeganCount;
@property (nonatomic) unsigned long long modelessUsedAtLeastOnceCount;
@property (nonatomic) unsigned long long multiModalDictationBeganCount;

+ (bool)supportsSecureCoding;

- (id)description;
- (unsigned long long)dictationBeganCount;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)inputActionCount;
- (long long)mergeActionIfPossible:(id)arg1;
- (unsigned long long)modelessUsedAtLeastOnceCount;
- (unsigned long long)multiModalDictationBeganCount;
- (void)setDictationBeganCount:(unsigned long long)arg1;
- (void)setModelessUsedAtLeastOnceCount:(unsigned long long)arg1;
- (void)setMultiModalDictationBeganCount:(unsigned long long)arg1;

@end
