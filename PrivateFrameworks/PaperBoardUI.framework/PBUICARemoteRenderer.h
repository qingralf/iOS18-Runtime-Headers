/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PaperBoardUI.framework/PaperBoardUI
 */

@interface PBUICARemoteRenderer : NSObject <PBUIRenderer> {
    struct CGColorSpace { } * _colorSpace;
    <PBUIRemoteRendererConnection> * _underlyingConnection;
}

@property (nonatomic, readonly) struct CGColorSpace { }*colorSpace;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <PBUIRemoteRendererConnection> *underlyingConnection;

+ (id)remoteRendererIfPossible;
+ (id)secureCodableRequestClasses;
+ (bool)shouldUseXPCServiceForRendering;

- (void).cxx_destruct;
- (struct CGColorSpace { }*)colorSpace;
- (void)dealloc;
- (id)init;
- (id)initWithUnderlyingConnection:(id)arg1;
- (void)renderRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)renderRequest:(id)arg1 error:(out id*)arg2;
- (bool)supportsRequest:(id)arg1 orError:(out id*)arg2;
- (id)underlyingConnection;

@end