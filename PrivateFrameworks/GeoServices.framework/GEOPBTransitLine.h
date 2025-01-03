/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPBTransitLine : PBCodable <GEOTransitNamedItem, NSCopying> {
    GEOPBTransitArtwork * _alternateArtwork;
    GEOPBTransitArtwork * _artwork;
    GEOPBTransitLineDisplayHints * _displayHints;
    struct { 
        unsigned int has_muid : 1; 
        unsigned int has_guidanceSnappingType : 1; 
        unsigned int has_lineIndex : 1; 
        unsigned int has_placeDisplayStyle : 1; 
        unsigned int has_preferredDepartureTimeStyle : 1; 
        unsigned int has_systemIndex : 1; 
        unsigned int has_transitType : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_operatingHours : 1; 
        unsigned int read_alternateArtwork : 1; 
        unsigned int read_artwork : 1; 
        unsigned int read_displayHints : 1; 
        unsigned int read_headerArtwork : 1; 
        unsigned int read_lineColor : 1; 
        unsigned int read_modeArtwork : 1; 
        unsigned int read_nameDisplayString : 1; 
        unsigned int read_styleAttributes : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    int  _guidanceSnappingType;
    GEOPBTransitArtwork * _headerArtwork;
    NSString * _lineColor;
    unsigned int  _lineIndex;
    GEOPBTransitArtwork * _modeArtwork;
    unsigned long long  _muid;
    NSString * _nameDisplayString;
    struct GEOPBTransitTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; } * _operatingHours;
    unsigned long long  _operatingHoursCount;
    unsigned long long  _operatingHoursSpace;
    int  _placeDisplayStyle;
    int  _preferredDepartureTimeStyle;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    GEOStyleAttributes * _styleAttributes;
    unsigned int  _systemIndex;
    int  _transitType;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) GEOPBTransitArtwork *alternateArtwork;
@property (nonatomic, retain) GEOPBTransitArtwork *artwork;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) GEOPBTransitLineDisplayHints *displayHints;
@property (nonatomic) int guidanceSnappingType;
@property (nonatomic, readonly) bool hasAlternateArtwork;
@property (nonatomic, readonly) bool hasArtwork;
@property (nonatomic, readonly) bool hasDisplayHints;
@property (nonatomic) bool hasGuidanceSnappingType;
@property (nonatomic, readonly) bool hasHeaderArtwork;
@property (nonatomic, readonly) bool hasLineColor;
@property (nonatomic) bool hasLineIndex;
@property (nonatomic, readonly) bool hasModeArtwork;
@property (nonatomic) bool hasMuid;
@property (nonatomic, readonly) bool hasNameDisplayString;
@property (nonatomic) bool hasPlaceDisplayStyle;
@property (nonatomic) bool hasPreferredDepartureTimeStyle;
@property (nonatomic, readonly) bool hasStyleAttributes;
@property (nonatomic) bool hasSystemIndex;
@property (nonatomic) bool hasTransitType;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GEOPBTransitArtwork *headerArtwork;
@property (nonatomic, retain) NSString *lineColor;
@property (nonatomic) unsigned int lineIndex;
@property (nonatomic, retain) GEOPBTransitArtwork *modeArtwork;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, retain) NSString *nameDisplayString;
@property (nonatomic, readonly) struct GEOPBTransitTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*operatingHours;
@property (nonatomic, readonly) unsigned long long operatingHoursCount;
@property (nonatomic) int placeDisplayStyle;
@property (nonatomic) int preferredDepartureTimeStyle;
@property (nonatomic, retain) GEOStyleAttributes *styleAttributes;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int systemIndex;
@property (nonatomic) int transitType;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsGuidanceSnappingType:(id)arg1;
- (int)StringAsPlaceDisplayStyle:(id)arg1;
- (int)StringAsPreferredDepartureTimeStyle:(id)arg1;
- (void)addOperatingHours:(struct GEOPBTransitTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })arg1;
- (id)alternateArtwork;
- (id)artwork;
- (id)bestName;
- (void)clearOperatingHours;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayHints;
- (id)geoTransitLineWithSystem:(id)arg1 locationHint:(struct { double x1; double x2; })arg2;
- (int)guidanceSnappingType;
- (id)guidanceSnappingTypeAsString:(int)arg1;
- (bool)hasAlternateArtwork;
- (bool)hasArtwork;
- (bool)hasDisplayHints;
- (bool)hasGuidanceSnappingType;
- (bool)hasHeaderArtwork;
- (bool)hasLineColor;
- (bool)hasLineIndex;
- (bool)hasModeArtwork;
- (bool)hasMuid;
- (bool)hasNameDisplayString;
- (bool)hasPlaceDisplayStyle;
- (bool)hasPreferredDepartureTimeStyle;
- (bool)hasStyleAttributes;
- (bool)hasSystemIndex;
- (bool)hasTransitType;
- (unsigned long long)hash;
- (id)headerArtwork;
- (id)identifierWithLocationHint:(struct { double x1; double x2; })arg1;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)lineColor;
- (unsigned int)lineIndex;
- (void)mergeFrom:(id)arg1;
- (id)modeArtwork;
- (unsigned long long)muid;
- (id)nameDisplayString;
- (struct GEOPBTransitTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)operatingHours;
- (struct GEOPBTransitTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; })operatingHoursAtIndex:(unsigned long long)arg1;
- (unsigned long long)operatingHoursCount;
- (int)placeDisplayStyle;
- (id)placeDisplayStyleAsString:(int)arg1;
- (int)preferredDepartureTimeStyle;
- (id)preferredDepartureTimeStyleAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAlternateArtwork:(id)arg1;
- (void)setArtwork:(id)arg1;
- (void)setDisplayHints:(id)arg1;
- (void)setGuidanceSnappingType:(int)arg1;
- (void)setHasGuidanceSnappingType:(bool)arg1;
- (void)setHasLineIndex:(bool)arg1;
- (void)setHasMuid:(bool)arg1;
- (void)setHasPlaceDisplayStyle:(bool)arg1;
- (void)setHasPreferredDepartureTimeStyle:(bool)arg1;
- (void)setHasSystemIndex:(bool)arg1;
- (void)setHasTransitType:(bool)arg1;
- (void)setHeaderArtwork:(id)arg1;
- (void)setLineColor:(id)arg1;
- (void)setLineIndex:(unsigned int)arg1;
- (void)setModeArtwork:(id)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setNameDisplayString:(id)arg1;
- (void)setOperatingHours:(struct GEOPBTransitTimeRange { unsigned int x1; unsigned int x2; struct { unsigned int x_3_1_1 : 1; unsigned int x_3_1_2 : 1; } x3; }*)arg1 count:(unsigned long long)arg2;
- (void)setPlaceDisplayStyle:(int)arg1;
- (void)setPreferredDepartureTimeStyle:(int)arg1;
- (void)setStyleAttributes:(id)arg1;
- (void)setSystemIndex:(unsigned int)arg1;
- (void)setTransitType:(int)arg1;
- (id)styleAttributes;
- (unsigned int)systemIndex;
- (int)transitType;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
