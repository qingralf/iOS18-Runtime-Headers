/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIButtonItemGenerator : NSObject {
    <SearchUIButtonItemGeneratorViewDelegate> * _delegate;
    <SearchUIFeedbackDelegate> * _feedbackDelegate;
}

@property <SearchUIButtonItemGeneratorViewDelegate> *delegate;
@property <SearchUIFeedbackDelegate> *feedbackDelegate;

+ (bool)mayRequireAsyncGenerationForButtonItem:(id)arg1;

- (void).cxx_destruct;
- (id)delegate;
- (id)feedbackDelegate;
- (void)generateSearchUIButtonItemsWithSFButtonItem:(id)arg1 completion:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)setFeedbackDelegate:(id)arg1;

@end