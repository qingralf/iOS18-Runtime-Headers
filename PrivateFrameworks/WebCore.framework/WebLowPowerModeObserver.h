/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface WebLowPowerModeObserver : NSObject {
    bool  _isLowPowerModeEnabled;
    struct CheckedPtr<WebCore::LowPowerModeNotifier, WTF::RawPtrTraits<WebCore::LowPowerModeNotifier>> { 
        struct LowPowerModeNotifier {} *m_ptr; 
    }  _notifier;
}

@property (nonatomic, readonly) bool isLowPowerModeEnabled;
@property (nonatomic) /* Warning: unhandled struct encoding: '{CheckedPtr<WebCore::LowPowerModeNotifier' */ struct  notifier; /* unknown property attribute:  WTF::RawPtrTraits<WebCore::LowPowerModeNotifier>>=^{LowPowerModeNotifier}} */

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_didReceiveLowPowerModeChange;
- (void)dealloc;
- (void)detach;
- (id)initWithNotifier:(void*)arg1;
- (bool)isLowPowerModeEnabled;
- (struct CheckedPtr<WebCore::LowPowerModeNotifier, WTF::RawPtrTraits<WebCore::LowPowerModeNotifier>> { struct LowPowerModeNotifier {} *x1; })notifier;
- (void)setNotifier:(struct CheckedPtr<WebCore::LowPowerModeNotifier, WTF::RawPtrTraits<WebCore::LowPowerModeNotifier>> { struct LowPowerModeNotifier {} *x1; })arg1;

@end