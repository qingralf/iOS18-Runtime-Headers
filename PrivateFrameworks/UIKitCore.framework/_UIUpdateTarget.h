/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIUpdateTarget : NSObject {
    long long  _commitDeadlineLeadDuration;
    long long  _commitTimeLeadDuration;
    struct _UIInstrumentedCADisplay { 
        CADisplay *direct; 
    }  _display;
    unsigned int  _displayId;
    unsigned long long  _epsilonDuration;
    struct _UIInstrumentedCADynamicFrameRateSource { 
        CADynamicFrameRateSource *direct; 
    }  _frameSource;
    bool  _frameSourceActive;
    unsigned long long  _minFrameDuration;
    long long  _presentationLagDuration;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
