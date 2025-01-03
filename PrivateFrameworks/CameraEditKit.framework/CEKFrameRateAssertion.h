/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
 */

@interface CEKFrameRateAssertion : NSObject <BSInvalidatable> {
    BSSimpleAssertion * _assertion;
    struct _UIUpdateRequest { 
        unsigned int flags; 
        unsigned int minRate; 
        unsigned int preferredRate; 
        unsigned int maxRate; 
        unsigned long long phase; 
        unsigned long long load; 
    }  _updateRequest;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithFrameRateRange:(struct CAFrameRateRange { float x1; float x2; float x3; })arg1 highFrameRateReason:(unsigned int)arg2;
- (void)invalidate;

@end
