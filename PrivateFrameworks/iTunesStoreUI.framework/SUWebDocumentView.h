/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUWebDocumentView : UIWebDocumentView <WebPolicyDelegate> {
    unsigned int  _adjustHeightToFit;
    id  _loadDelegate;
    NSString * _stylesheet;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) id loadDelegate;
@property (nonatomic, retain) NSString *stylesheet;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)loadDelegate;
- (void)setHTMLFragment:(id)arg1;
- (void)setLoadDelegate:(id)arg1;
- (void)setPlaintextString:(id)arg1;
- (void)setStylesheet:(id)arg1;
- (id)stylesheet;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;

@end
