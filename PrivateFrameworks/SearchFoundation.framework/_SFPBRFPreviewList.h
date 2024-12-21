/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBRFPreviewList : PBCodable <NSSecureCoding, _SFPBRFPreviewList> {
    NSArray * _previews;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *previews;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addPreviews:(id)arg1;
- (void)clearPreviews;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)previews;
- (id)previewsAtIndex:(unsigned long long)arg1;
- (unsigned long long)previewsCount;
- (bool)readFrom:(id)arg1;
- (void)setPreviews:(id)arg1;
- (void)writeTo:(id)arg1;

@end