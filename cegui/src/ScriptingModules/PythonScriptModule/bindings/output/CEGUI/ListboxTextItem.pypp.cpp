// This file has been generated by Py++.

#include "boost/python.hpp"
#include "python_CEGUI.h"
#include "ListboxTextItem.pypp.hpp"

namespace bp = boost::python;

struct ListboxTextItem_wrapper : CEGUI::ListboxTextItem, bp::wrapper< CEGUI::ListboxTextItem > {

    ListboxTextItem_wrapper(CEGUI::ListboxTextItem const & arg )
    : CEGUI::ListboxTextItem( arg )
      , bp::wrapper< CEGUI::ListboxTextItem >(){
        // copy constructor
        
    }

    ListboxTextItem_wrapper(::CEGUI::String const & text, ::CEGUI::uint item_id=0, void * item_data=0, bool disabled=false, bool auto_delete=true )
    : CEGUI::ListboxTextItem( boost::ref(text), item_id, item_data, disabled, auto_delete )
      , bp::wrapper< CEGUI::ListboxTextItem >(){
        // constructor
    
    }

    virtual void draw( ::CEGUI::GeometryBuffer & buffer, ::CEGUI::Rect const & targetRect, float alpha, ::CEGUI::Rect const * clipper ) const  {
        if( bp::override func_draw = this->get_override( "draw" ) )
            func_draw( boost::ref(buffer), boost::ref(targetRect), alpha, boost::python::ptr(clipper) );
        else{
            this->CEGUI::ListboxTextItem::draw( boost::ref(buffer), boost::ref(targetRect), alpha, boost::python::ptr(clipper) );
        }
    }
    
    void default_draw( ::CEGUI::GeometryBuffer & buffer, ::CEGUI::Rect const & targetRect, float alpha, ::CEGUI::Rect const * clipper ) const  {
        CEGUI::ListboxTextItem::draw( boost::ref(buffer), boost::ref(targetRect), alpha, boost::python::ptr(clipper) );
    }

    virtual ::CEGUI::Size getPixelSize(  ) const  {
        if( bp::override func_getPixelSize = this->get_override( "getPixelSize" ) )
            return func_getPixelSize(  );
        else{
            return this->CEGUI::ListboxTextItem::getPixelSize(  );
        }
    }
    
    ::CEGUI::Size default_getPixelSize(  ) const  {
        return CEGUI::ListboxTextItem::getPixelSize( );
    }

    virtual void setText( ::CEGUI::String const & text ) {
        if( bp::override func_setText = this->get_override( "setText" ) )
            func_setText( boost::ref(text) );
        else{
            this->CEGUI::ListboxTextItem::setText( boost::ref(text) );
        }
    }
    
    void default_setText( ::CEGUI::String const & text ) {
        CEGUI::ListboxTextItem::setText( boost::ref(text) );
    }

};

void register_ListboxTextItem_class(){

    { //::CEGUI::ListboxTextItem
        typedef bp::class_< ListboxTextItem_wrapper, bp::bases< CEGUI::ListboxItem > > ListboxTextItem_exposer_t;
        ListboxTextItem_exposer_t ListboxTextItem_exposer = ListboxTextItem_exposer_t( "ListboxTextItem", "*!\n\
        \n\
           Class used for textual items in a list box.\n\
        *\n", bp::init< CEGUI::String const &, bp::optional< CEGUI::uint, void *, bool, bool > >(( bp::arg("text"), bp::arg("item_id")=(::CEGUI::uint)(0), bp::arg("item_data")=bp::object(), bp::arg("disabled")=(bool)(false), bp::arg("auto_delete")=(bool)(true) ), "*************************************************************************\n\
           Construction and Destruction\n\
        *************************************************************************\n\
        *!\n\
        \n\
           base class constructor\n\
        *\n") );
        bp::scope ListboxTextItem_scope( ListboxTextItem_exposer );
        bp::implicitly_convertible< CEGUI::String const &, CEGUI::ListboxTextItem >();
        { //::CEGUI::ListboxTextItem::draw
        
            typedef void ( ::CEGUI::ListboxTextItem::*draw_function_type )( ::CEGUI::GeometryBuffer &,::CEGUI::Rect const &,float,::CEGUI::Rect const * ) const;
            typedef void ( ListboxTextItem_wrapper::*default_draw_function_type )( ::CEGUI::GeometryBuffer &,::CEGUI::Rect const &,float,::CEGUI::Rect const * ) const;
            
            ListboxTextItem_exposer.def( 
                "draw"
                , draw_function_type(&::CEGUI::ListboxTextItem::draw)
                , default_draw_function_type(&ListboxTextItem_wrapper::default_draw)
                , ( bp::arg("buffer"), bp::arg("targetRect"), bp::arg("alpha"), bp::arg("clipper") ) );
        
        }
        { //::CEGUI::ListboxTextItem::getFont
        
            typedef ::CEGUI::Font * ( ::CEGUI::ListboxTextItem::*getFont_function_type )(  ) const;
            
            ListboxTextItem_exposer.def( 
                "getFont"
                , getFont_function_type( &::CEGUI::ListboxTextItem::getFont )
                , bp::return_value_policy< bp::reference_existing_object >()
                , "*************************************************************************\n\
                  Accessor methods\n\
               *************************************************************************\n\
               *!\n\
               \n\
                  Return a pointer to the font being used by this ListboxTextItem\n\
            \n\
                  This method will try a number of places to find a font to be used.  If no font can be\n\
                  found, NULL is returned.\n\
            \n\
               @return\n\
                  Font to be used for rendering this item\n\
               *\n" );
        
        }
        { //::CEGUI::ListboxTextItem::getPixelSize
        
            typedef ::CEGUI::Size ( ::CEGUI::ListboxTextItem::*getPixelSize_function_type )(  ) const;
            typedef ::CEGUI::Size ( ListboxTextItem_wrapper::*default_getPixelSize_function_type )(  ) const;
            
            ListboxTextItem_exposer.def( 
                "getPixelSize"
                , getPixelSize_function_type(&::CEGUI::ListboxTextItem::getPixelSize)
                , default_getPixelSize_function_type(&ListboxTextItem_wrapper::default_getPixelSize) );
        
        }
        { //::CEGUI::ListboxTextItem::getTextColours
        
            typedef ::CEGUI::ColourRect ( ::CEGUI::ListboxTextItem::*getTextColours_function_type )(  ) const;
            
            ListboxTextItem_exposer.def( 
                "getTextColours"
                , getTextColours_function_type( &::CEGUI::ListboxTextItem::getTextColours )
                , "*!\n\
               \n\
                  Return the current colours used for text rendering.\n\
            \n\
               @return\n\
                  ColourRect object describing the currently set colours\n\
               *\n" );
        
        }
        { //::CEGUI::ListboxTextItem::isTextParsingEnabled
        
            typedef bool ( ::CEGUI::ListboxTextItem::*isTextParsingEnabled_function_type )(  ) const;
            
            ListboxTextItem_exposer.def( 
                "isTextParsingEnabled"
                , isTextParsingEnabled_function_type( &::CEGUI::ListboxTextItem::isTextParsingEnabled )
                , "! return whether text parsing is enabled for this ListboxTextItem.\n" );
        
        }
        { //::CEGUI::ListboxTextItem::setFont
        
            typedef void ( ::CEGUI::ListboxTextItem::*setFont_function_type )( ::CEGUI::Font * ) ;
            
            ListboxTextItem_exposer.def( 
                "setFont"
                , setFont_function_type( &::CEGUI::ListboxTextItem::setFont )
                , ( bp::arg("font") )
                , "*************************************************************************\n\
                  Manipulator methods\n\
               *************************************************************************\n\
               *!\n\
               \n\
                  Set the font to be used by this ListboxTextItem\n\
            \n\
               @param font\n\
                  Font to be used for rendering this item\n\
            \n\
               @return\n\
                  Nothing\n\
               *\n" );
        
        }
        { //::CEGUI::ListboxTextItem::setFont
        
            typedef void ( ::CEGUI::ListboxTextItem::*setFont_function_type )( ::CEGUI::String const & ) ;
            
            ListboxTextItem_exposer.def( 
                "setFont"
                , setFont_function_type( &::CEGUI::ListboxTextItem::setFont )
                , ( bp::arg("font_name") )
                , "*!\n\
               \n\
                  Set the font to be used by this ListboxTextItem\n\
            \n\
               @param font_name\n\
                  String object containing the name of the Font to be used for rendering this item\n\
            \n\
               @return\n\
                  Nothing\n\
               *\n" );
        
        }
        { //::CEGUI::ListboxTextItem::setText
        
            typedef void ( ::CEGUI::ListboxTextItem::*setText_function_type )( ::CEGUI::String const & ) ;
            typedef void ( ListboxTextItem_wrapper::*default_setText_function_type )( ::CEGUI::String const & ) ;
            
            ListboxTextItem_exposer.def( 
                "setText"
                , setText_function_type(&::CEGUI::ListboxTextItem::setText)
                , default_setText_function_type(&ListboxTextItem_wrapper::default_setText)
                , ( bp::arg("text") ) );
        
        }
        { //::CEGUI::ListboxTextItem::setTextColours
        
            typedef void ( ::CEGUI::ListboxTextItem::*setTextColours_function_type )( ::CEGUI::ColourRect const & ) ;
            
            ListboxTextItem_exposer.def( 
                "setTextColours"
                , setTextColours_function_type( &::CEGUI::ListboxTextItem::setTextColours )
                , ( bp::arg("cols") )
                , "*!\n\
               \n\
                  Set the colours used for text rendering.\n\
            \n\
               @param cols\n\
                  ColourRect object describing the colours to be used.\n\
            \n\
               @return\n\
                  Nothing.\n\
               *\n" );
        
        }
        { //::CEGUI::ListboxTextItem::setTextColours
        
            typedef void ( ::CEGUI::ListboxTextItem::*setTextColours_function_type )( ::CEGUI::Colour,::CEGUI::Colour,::CEGUI::Colour,::CEGUI::Colour ) ;
            
            ListboxTextItem_exposer.def( 
                "setTextColours"
                , setTextColours_function_type( &::CEGUI::ListboxTextItem::setTextColours )
                , ( bp::arg("top_left_colour"), bp::arg("top_right_colour"), bp::arg("bottom_left_colour"), bp::arg("bottom_right_colour") )
                , "*!\n\
               \n\
                  Set the colours used for text rendering.\n\
            \n\
               @param top_left_colour\n\
                  Colour (as ARGB value) to be applied to the top-left corner of each text glyph rendered.\n\
            \n\
               @param top_right_colour\n\
                  Colour (as ARGB value) to be applied to the top-right corner of each text glyph rendered.\n\
            \n\
               @param bottom_left_colour\n\
                  Colour (as ARGB value) to be applied to the bottom-left corner of each text glyph rendered.\n\
            \n\
               @param bottom_right_colour\n\
                  Colour (as ARGB value) to be applied to the bottom-right corner of each text glyph rendered.\n\
            \n\
               @return \n\
                  Nothing.\n\
               *\n" );
        
        }
        { //::CEGUI::ListboxTextItem::setTextColours
        
            typedef void ( ::CEGUI::ListboxTextItem::*setTextColours_function_type )( ::CEGUI::Colour ) ;
            
            ListboxTextItem_exposer.def( 
                "setTextColours"
                , setTextColours_function_type( &::CEGUI::ListboxTextItem::setTextColours )
                , ( bp::arg("col") )
                , "*!\n\
               \n\
                  Set the colours used for text rendering.\n\
            \n\
               @param col\n\
                  colour value to be used when rendering.\n\
            \n\
               @return\n\
                  Nothing.\n\
               *\n" );
        
        }
        { //::CEGUI::ListboxTextItem::setTextParsingEnabled
        
            typedef void ( ::CEGUI::ListboxTextItem::*setTextParsingEnabled_function_type )( bool const ) ;
            
            ListboxTextItem_exposer.def( 
                "setTextParsingEnabled"
                , setTextParsingEnabled_function_type( &::CEGUI::ListboxTextItem::setTextParsingEnabled )
                , ( bp::arg("enable") )
                , "*!\n\
                \n\
                    Set whether the the ListboxTextItem will have it's text parsed via the\n\
                    BasicRenderedStringParser or not.\n\
            \n\
                @param enable\n\
                    - true if the ListboxTextItem text will be parsed.\n\
                    - false if the ListboxTextItem text will be used verbatim.\n\
                *\n" );
        
        }
        ListboxTextItem_exposer.def_readonly( "DefaultTextColour", CEGUI::ListboxTextItem::DefaultTextColour, "*************************************************************************\n\
           Constants\n\
        *************************************************************************\n" );
    }

}
