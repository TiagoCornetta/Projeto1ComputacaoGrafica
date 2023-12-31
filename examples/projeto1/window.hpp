#ifndef WINDOW_HPP_
#define WINDOW_HPP_

#include <random>

#include "abcgOpenGL.hpp"

class Window : public abcg::OpenGLWindow {
protected:
  // onCreate chamado uma vez so quando a janela e inciaida
  void onCreate() override;
  void onPaint() override;
  void onPaintUI() override;
  //variando de acordo com o tamanho da tela
  void onResize(glm::ivec2 const &size) override;
  // onDestroy chamado somente quando a janela e desligada
  //liberar recursos da OpenGl apos o termino do programa
  void onDestroy() override;

private:
  glm::ivec2 m_viewportSize{};

  //recursos alocados pelo Open_Gl para criar figuras matematicas
  GLuint m_VAO{};
  GLuint m_VBOPositions{};
  GLuint m_VBOColors{};
  GLuint m_program{};

  std::default_random_engine m_randomEngine;

  abcg::Timer m_timer;
  int m_delay{200};
  float m_angle = {0.0f};
  float m_radius = {1.0f};
  int m_direction = {-1};
  int m_sides = {3};
  float m_space = {0.02f};
  float m_scale = {1.0f};
  glm::vec2 m_P{};

  void setupModel(int sides);
};

#endif