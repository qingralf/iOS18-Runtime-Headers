/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ShazamKit.framework/ShazamKit
 */

@interface SHCustomCatalogMemoryContainer : NSObject <SHCustomCatalogContainer> {
    <SHCustomCatalogStorage> * _container;
}

@property (nonatomic, readonly) <SHCustomCatalogStorage> *container;
@property (nonatomic, readonly) NSData *dataRepresentation;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *referenceSignatures;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addSignature:(id)arg1 representingMediaItems:(id)arg2;
- (id)container;
- (id)dataRepresentation;
- (id)init;
- (bool)loadFromData:(id)arg1 error:(id*)arg2;
- (bool)loadFromURL:(id)arg1 error:(id*)arg2;
- (id)mediaItemsForReferenceSignature:(id)arg1;
- (id)referenceSignatureForTrackID:(unsigned long long)arg1;
- (id)referenceSignatures;
- (bool)writeToURL:(id)arg1 error:(id*)arg2;

@end
