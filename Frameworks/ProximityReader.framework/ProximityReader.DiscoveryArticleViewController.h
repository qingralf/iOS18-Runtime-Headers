/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ProximityReader.framework/ProximityReader
 */

@interface ProximityReader.DiscoveryArticleViewController : PKDiscoveryArticleViewController {
    void didDisappear;
    void disappearHandler;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  isDismissed;
    void layoutSet;
    void rotatedViewTag;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithArticleLayout:(id)arg1 referrerIdentifier:(id)arg2 cardTemplateInformation:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemIdentifier:(id)arg1 referrerIdentifier:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setArticleLayout:(id)arg1 animated:(bool)arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
