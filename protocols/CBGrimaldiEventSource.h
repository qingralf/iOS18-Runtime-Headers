/* Generated by RuntimeBrowser.
 */

@protocol CBGrimaldiEventSource <NSObject>

@required

- (int)getCoexFlags:(unsigned int*)arg1;
- (int)getGlobalCorrectionFactor:(double*)arg1;
- (int)requestEventOn:(void *)arg1 withNsamples:(void *)arg2 withCallback:(void *)arg3; // needs 3 arg types, found 8: NSObject<OS_dispatch_queue> *, unsigned char, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, struct ApplePhotonDetectorServicesLuxInfo { float *x1; float *x2; unsigned long long *x3; char *x4; int x5; unsigned char x6; }*, void*

@end