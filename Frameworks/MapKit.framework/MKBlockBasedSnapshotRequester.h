/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKBlockBasedSnapshotRequester : NSObject <MKMapSnapshotCreatorRequester> {
    id /* block */  handler;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)snapshotRequesterWitHandler:(id /* block */)arg1;

- (void).cxx_destruct;
- (id /* block */)handler;
- (void)mapSnapshotCreator:(id)arg1 didCreateSnapshot:(id)arg2 attributionString:(id)arg3 context:(id)arg4;
- (void)setHandler:(id /* block */)arg1;

@end
