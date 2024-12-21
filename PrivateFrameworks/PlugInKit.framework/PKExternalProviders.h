/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

@interface PKExternalProviders : NSObject <PKExternalProviders> {
    <PKFilesystemProvider> * _filesystem;
    <PKLaunchProvider> * _launch;
    <PKLaunchServicesProvider> * _ls;
    <PKRunningBoardProvider> * _runningboard;
    <PKSandboxProvider> * _sandbox;
    <PKSystemProvider> * _sys;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <PKFilesystemProvider> *filesystem;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PKLaunchProvider> *launch;
@property (nonatomic, readonly) <PKLaunchServicesProvider> *ls;
@property (nonatomic, readonly) <PKRunningBoardProvider> *runningboard;
@property (nonatomic, readonly) <PKSandboxProvider> *sandbox;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <PKSystemProvider> *sys;

- (void).cxx_destruct;
- (id)filesystem;
- (id)init;
- (id)initWithLaunchServicesProvider:(id)arg1;
- (id)launch;
- (id)ls;
- (id)runningboard;
- (id)sandbox;
- (id)sys;

@end