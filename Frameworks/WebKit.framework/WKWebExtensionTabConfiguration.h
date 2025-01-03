/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKWebExtensionTabConfiguration : NSObject {
    unsigned long long  _index;
    <WKWebExtensionTab> * _parentTab;
    bool  _shouldAddToSelection;
    bool  _shouldBeActive;
    bool  _shouldBeMuted;
    bool  _shouldBePinned;
    bool  _shouldReaderModeBeActive;
    NSURL * _url;
    <WKWebExtensionWindow> * _window;
}

@property (setter=_setIndex:, nonatomic) unsigned long long index;
@property (setter=_setParentTab:, nonatomic, retain) <WKWebExtensionTab> *parentTab;
@property (setter=_setShouldAddToSelection:, nonatomic) bool shouldAddToSelection;
@property (setter=_setShouldBeActive:, nonatomic) bool shouldBeActive;
@property (setter=_setShouldBeMuted:, nonatomic) bool shouldBeMuted;
@property (setter=_setShouldBePinned:, nonatomic) bool shouldBePinned;
@property (setter=_setShouldReaderModeBeActive:, nonatomic) bool shouldReaderModeBeActive;
@property (setter=_setURL:, nonatomic, copy) NSURL *url;
@property (setter=_setWindow:, nonatomic, retain) <WKWebExtensionWindow> *window;

- (void).cxx_destruct;
- (id)_init;
- (void)_setIndex:(unsigned long long)arg1;
- (void)_setParentTab:(id)arg1;
- (void)_setShouldAddToSelection:(bool)arg1;
- (void)_setShouldBeActive:(bool)arg1;
- (void)_setShouldBeMuted:(bool)arg1;
- (void)_setShouldBePinned:(bool)arg1;
- (void)_setShouldReaderModeBeActive:(bool)arg1;
- (void)_setURL:(id)arg1;
- (void)_setWindow:(id)arg1;
- (unsigned long long)index;
- (id)parentTab;
- (bool)shouldAddToSelection;
- (bool)shouldBeActive;
- (bool)shouldBeMuted;
- (bool)shouldBePinned;
- (bool)shouldReaderModeBeActive;
- (id)url;
- (id)window;

@end
