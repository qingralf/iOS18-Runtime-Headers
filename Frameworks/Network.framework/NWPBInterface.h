/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Network.framework/Network
 */

@interface NWPBInterface : PBCodable <NSCopying> {
    unsigned int  _delegateIndex;
    bool  _expensive;
    unsigned int  _generation;
    struct { 
        unsigned int delegateIndex : 1; 
        unsigned int generation : 1; 
        unsigned int index : 1; 
        unsigned int mtu : 1; 
        unsigned int subtype : 1; 
        unsigned int type : 1; 
        unsigned int expensive : 1; 
    }  _has;
    unsigned int  _index;
    unsigned int  _mtu;
    NSString * _name;
    int  _subtype;
    int  _type;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end