/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/BrowserEngineKit.framework/BrowserEngineKit
 */

@interface BEMediaEnvironment : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  inner;
}

- (void).cxx_destruct;
- (bool)activateWithError:(id*)arg1;
- (id)createXPCRepresentation;
- (id)init;
- (id)initWithWebPageURL:(id)arg1;
- (id)initWithXPCRepresentation:(id)arg1 error:(id*)arg2;
- (id)makeCaptureSessionWithError:(id*)arg1;
- (bool)suspendWithError:(id*)arg1;

@end
