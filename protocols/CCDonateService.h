/* Generated by RuntimeBrowser.
 */

@protocol CCDonateService

@required

- (oneway void)abortSetDonation;
- (void)addItemsWithContents:(void *)arg1 metaContents:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSArray *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned short, void*
- (oneway void)beginSetDonationWithItemType:(void *)arg1 remoteDevice:(void *)arg2 encodedDescriptors:(void *)arg3 version:(void *)arg4 validity:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 12: unsigned short, CCDevice *, NSString *, unsigned long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned short, unsigned long long, void*
- (oneway void)endSetDonationWithOptions:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned short, void*
- (void)mergeDelta:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: CKMergeableDelta *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned short, void*
- (void)removeSourceItemIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned short, void*

@end
