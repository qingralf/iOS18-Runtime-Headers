/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIStatesFeedbackGeneratorConfiguration : _UIFeedbackGeneratorConfiguration {
    NSString * _initialState;
    NSDictionary * _stateChangeConfigurations;
}

@property (nonatomic, retain) NSString *initialState;
@property (nonatomic, retain) NSDictionary *stateChangeConfigurations;

+ (id)keyFromState:(id)arg1 toState:(id)arg2;

- (void).cxx_destruct;
- (id)_alternateFeedback:(id)arg1 forDevice:(long long)arg2 senderID:(unsigned long long)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)feedbackKeyPaths;
- (id)hidFeedbackPatternNameKeyPaths;
- (id)initialState;
- (void)setInitialState:(id)arg1;
- (void)setStateChangeConfigurations:(id)arg1;
- (id)stateChangeConfigurations;

@end
