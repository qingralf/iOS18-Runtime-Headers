/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreGraphics.framework/CoreGraphics
 */

@interface CGRemotePDFDocumentProxy : NSObject {
    <CGRemotePDFDocumentProtocol><NSXPCProxyCreating> * _documentProxy;
}

@property (getter=isEncrypted, readonly) bool encrypted;
@property (readonly) NSDictionary *infoDictionary;
@property (readonly) unsigned long long pageCount;
@property (getter=isUnlocked, readonly) bool unlocked;

- (void).cxx_destruct;
- (void)getPageAtIndex:(long long)arg1 completion:(id /* block */)arg2;
- (void)getVersionMajor:(long long*)arg1 andMinor:(long long*)arg2;
- (id)infoDictionary;
- (id)initWithRemoteDocument:(id)arg1;
- (bool)isEncrypted;
- (bool)isUnlocked;
- (unsigned long long)pageCount;
- (id)pageProxyForRemotePage:(id)arg1;
- (id)sync_pageAtIndex:(long long)arg1;

@end
