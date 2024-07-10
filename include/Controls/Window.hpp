#ifndef VWRTK_VENTANA_WINDOW_HPP
#define VWRTK_VENTANA_WINDOW_HPP

#include "Base/Visual.hpp"

//#include "System/Window.hpp"

namespace ventana
{
    /// <summary>
    /// Provides a window context for rendering.
    /// Wraps over the vwr::System::Window class.
    /// </summary>
    class Window : public Visual
    {
    public:
        Window();
        ~Window();

//        void Create(const wchar_t* title, uint16_t width, uint16_t height);
//        void Destroy();
//        void Update();
//        void Clear();
//        void Display();

        void SetTitle(const wchar_t* title) { m_title = title; }
        void SetSize(uint16_t width, uint16_t height) { m_width = width; m_height = height; }

        uint16_t Width() const { return m_width; }
        uint16_t Height() const { return m_height; }
        bool IsOpen() const { return m_isOpen;}

    private:
        const wchar_t* m_title;
        uint16_t m_width;
        uint16_t m_height;
        bool m_isOpen;
    };
}

#endif //VWRTK_VENTANA_WINDOW_HPP
