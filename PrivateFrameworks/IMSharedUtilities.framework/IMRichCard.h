/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

@interface IMRichCard : NSObject <IMAttributableContent, NSCopying> {
    void cardDescription;
    void chipList;
    void layout;
    void media;
    void title;
    void urlToTransferMap;
}

@property (nonatomic, readonly) NSString *cardDescription;
@property (nonatomic, readonly) IMChipList *chipList;
@property (nonatomic, readonly) IMRichCardLayout *layout;
@property (nonatomic, readonly) IMRichCardMedia *media;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, retain) IMUrlToTransferMap *urlToTransferMap;

- (void).cxx_destruct;
- (id)cardDescription;
- (id)chipList;
- (id)copyWithZone:(void*)arg1;
- (id)dictionaryRepresentation;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithLayout:(id)arg1 media:(id)arg2 title:(id)arg3 cardDescription:(id)arg4 chipList:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)layout;
- (id)media;
- (void)setUrlToTransferMap:(id)arg1;
- (id)title;
- (void)updateUrlToTransferMap:(id)arg1;
- (id)urlToTransferMap;

@end