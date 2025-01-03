/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UISearchControllerDidScrollDelegate : NSObject <_UIScrollViewScrollObserver_Internal> {
    <_UIScrollViewScrollObserver_Internal> * _controller;
    UIScrollView * _scrollView;
}

@property (nonatomic) <_UIScrollViewScrollObserver_Internal> *controller;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIScrollView *scrollView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didScroll;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (id)controller;
- (id)scrollView;
- (void)setController:(id)arg1;
- (void)setScrollView:(id)arg1;

@end
