/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

@interface PKSandboxProvider : NSObject <PKSandboxProvider>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (int)sandbox_container_path_for_pid:(int)arg1 buffer:(char *)arg2 bufsize:(unsigned long long)arg3;
- (long long)sandbox_extension_consume:(const char *)arg1;
- (char *)sandbox_extension_issue_file:(const char *)arg1 path:(const char *)arg2 flags:(unsigned int)arg3;
- (int)sandbox_extension_release:(long long)arg1;

@end