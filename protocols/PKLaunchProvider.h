/* Generated by RuntimeBrowser.
 */

@protocol PKLaunchProvider <NSObject>

@required

- (int)add_external_service:(int)arg1 path:(const char *)arg2 overlay:(NSObject<OS_xpc_object> *)arg3;
- (NSObject<OS_xpc_object> *)copy_busy_extension_instances:(const char **)arg1 cnt:(unsigned long long)arg2;
- (NSObject<OS_xpc_object> *)copy_extension_properties:(NSObject<OS_xpc_object> *)arg1;
- (NSObject<OS_xpc_object> *)copy_extension_properties_for_pid:(int)arg1;
- (void)remove_external_service:(void *)arg1 version:(void *)arg2 targetq:(void *)arg3 callback:(void *)arg4; // needs 4 arg types, found 9: const char *, const char *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*

@end
