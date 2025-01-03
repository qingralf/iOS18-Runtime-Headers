/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface _SFPBMediaItem : PBCodable <NSSecureCoding, _SFPBMediaItem> {
    NSArray * _buyOptions;
    NSString * _contentAdvisory;
    _SFPBImage * _contentAdvisoryImage;
    _SFPBImage * _overlayImage;
    _SFPBPunchout * _punchout;
    _SFPBImage * _reviewGlyph;
    NSString * _reviewText;
    NSArray * _subtitleCustomLineBreakings;
    _SFPBText * _subtitleText;
    _SFPBImage * _thumbnail;
    NSString * _title;
}

@property (nonatomic, copy) NSArray *buyOptions;
@property (nonatomic, copy) NSString *contentAdvisory;
@property (nonatomic, retain) _SFPBImage *contentAdvisoryImage;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) _SFPBImage *overlayImage;
@property (nonatomic, retain) _SFPBPunchout *punchout;
@property (nonatomic, retain) _SFPBImage *reviewGlyph;
@property (nonatomic, copy) NSString *reviewText;
@property (nonatomic, copy) NSArray *subtitleCustomLineBreakings;
@property (nonatomic, retain) _SFPBText *subtitleText;
@property (readonly) Class superclass;
@property (nonatomic, retain) _SFPBImage *thumbnail;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)addBuyOptions:(id)arg1;
- (void)addSubtitleCustomLineBreaking:(id)arg1;
- (id)buyOptions;
- (id)buyOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)buyOptionsCount;
- (void)clearBuyOptions;
- (void)clearSubtitleCustomLineBreaking;
- (id)contentAdvisory;
- (id)contentAdvisoryImage;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)overlayImage;
- (id)punchout;
- (bool)readFrom:(id)arg1;
- (id)reviewGlyph;
- (id)reviewText;
- (void)setBuyOptions:(id)arg1;
- (void)setContentAdvisory:(id)arg1;
- (void)setContentAdvisoryImage:(id)arg1;
- (void)setOverlayImage:(id)arg1;
- (void)setPunchout:(id)arg1;
- (void)setReviewGlyph:(id)arg1;
- (void)setReviewText:(id)arg1;
- (void)setSubtitleCustomLineBreaking:(id)arg1;
- (void)setSubtitleCustomLineBreakings:(id)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitleCustomLineBreakingAtIndex:(unsigned long long)arg1;
- (unsigned long long)subtitleCustomLineBreakingCount;
- (id)subtitleCustomLineBreakings;
- (id)subtitleText;
- (id)thumbnail;
- (id)title;
- (void)writeTo:(id)arg1;

@end
