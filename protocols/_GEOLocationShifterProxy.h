/* Generated by RuntimeBrowser.
 */

@protocol _GEOLocationShifterProxy <NSObject>

@required

- (void)fetchCachedShiftFunctionResponseForLocation:(void *)arg1 callbackQueue:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: GEOLatLng *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOLocationShiftFunctionResponse *, NSError *, void*
- (void)flushDiskCache;
- (void)getAllShiftEntries:(void *)arg1 queue:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 11: NSObject<OS_dispatch_group> *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDate *, double, double, double, void*
- (bool)isLocationShiftEnabled;
- (bool)isLocationShiftRequiredForCoordinate:(struct { double x1; double x2; })arg1;
- (bool)isLocationShiftRequiredForRegion:(GEOMapRegion *)arg1;
- (unsigned int)locationShiftFunctionVersion;
- (NSCache *)memoryCache;
- (void)pruneDiskCache;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)shiftLatLng:(void *)arg1 auditToken:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: GEOLatLng *, GEOApplicationAuditToken *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOLocationShiftFunctionResponse *, NSError *, void*

@end
