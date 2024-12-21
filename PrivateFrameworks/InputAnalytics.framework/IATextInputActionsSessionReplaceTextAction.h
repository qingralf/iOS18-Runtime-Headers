/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/InputAnalytics.framework/InputAnalytics
 */

@interface IATextInputActionsSessionReplaceTextAction : IATextInputActionsSessionAction {
    unsigned long long  _options;
}

@property (nonatomic) unsigned long long options;

+ (bool)supportsSecureCoding;

- (bool)changedContent;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isCapableOfTextInsertion;
- (long long)mergeActionIfPossible:(id)arg1;
- (unsigned long long)options;
- (void)setOptions:(unsigned long long)arg1;

@end