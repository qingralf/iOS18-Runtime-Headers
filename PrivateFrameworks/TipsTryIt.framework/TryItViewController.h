/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TipsTryIt.framework/TipsTryIt
 */

@interface TryItViewController : UIViewController {
    void delegate;
    void hostingController;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  tryItView;
}

@property (nonatomic, retain) <TryItViewControllerDelegate> *delegate;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredContentSize;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithLessonURL:(id)arg1 tipID:(id)arg2 collectionID:(id)arg3 correlationID:(id)arg4;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)logEndSession;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setDelegate:(id)arg1;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)viewDidDisappear:(bool)arg1;

@end